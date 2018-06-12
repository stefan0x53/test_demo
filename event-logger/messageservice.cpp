#include "messageservice.h"

#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>
#include <QFile>

#include "dto/event_message.pb.h"

MessageService::MessageService(QObject *parent)
    : QObject(parent)
{
    // Qt's object system will do the cleanup
    mServer = new QTcpServer(this);
    // TODO: Move to config file
    mFile = new QFile("events.log");
    mFile->open(QAbstractSocket::WriteOnly | QAbstractSocket::Append | QAbstractSocket::Text);

    connect(mServer, SIGNAL(newConnection()), this, SLOT(incommingConnection()));
}

MessageService::~MessageService()
{
    mSocket->close();
}

void MessageService::startListening()
{
    mServer->listen(QHostAddress::Any, 12345);
}

void MessageService::incommingConnection()
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    // The returned socket object is managed by it's parent
    mSocket = mServer->nextPendingConnection();
    com::test::dto::EventMessage msg;
    qint32 msgSize = 0;
    forever {
        mSocket->waitForReadyRead();
        // Parse simple agreed protocol. Size of the frame is first.
        if(msgSize == 0)
        {
            // Read and convert from network order to host
            if(mSocket->bytesAvailable() >= 4)
            {
                //char buff[4];
                qint32 tmpInt = 0;
                qint64 size_read = mSocket->read((char*)&tmpInt, 4);
                Q_ASSERT(size_read == 4);
                msgSize = ntohl(tmpInt);
            }
        }
        else if(mSocket->bytesAvailable() >= msgSize)
        {
            // After we have the frame size proceed to decode it ...
            QByteArray data;
            data.resize(msgSize);
            qint64 size_read = mSocket->read(data.data(), msgSize);
            Q_ASSERT(size_read == msgSize);
            if(size_read == msgSize) {
                msg.ParseFromArray(data.data(), data.size());
                // ... then log data to file
                QString logLine = QString("[%1] UserId: %2; Event: %3")
                        .arg(msg.timestamp()).arg(msg.user_id())
                        .arg(QString::fromStdString(msg.event()));
                QByteArray utfLog = logLine.toUtf8();
                utfLog.append('\n');
                mFile->write(utfLog);
                mFile->flush();
                // ... and to console for debugging
                qDebug() << logLine;
            }
            msgSize = 0;
        }
    }
}
