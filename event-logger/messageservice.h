#ifndef MESSAGESERVICE_H
#define MESSAGESERVICE_H

#include <QObject>

class QTcpServer;
class QTcpSocket;
class QFile;

class MessageService : public QObject
{
    Q_OBJECT
public:
    explicit MessageService(QObject *parent = nullptr);
    ~MessageService();

public slots:
    void startListening();

private slots:
    void incommingConnection();

private:
    QTcpServer* mServer;
    QTcpSocket* mSocket;
    QFile*      mFile; // Output file
};

#endif // MESSAGESERVICE_H
