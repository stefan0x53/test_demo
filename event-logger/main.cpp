#include <QCoreApplication>
#include <QTcpServer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTcpServer server = new QTcpServer(&a);

    server.listen(QHostAddress::Any, 12345);

    int numRead = 0, numReadTotal = 0;
    char buffer[50];

    forever {
        numRead  = socket.read(buffer, 50);

        // do whatever with array

        numReadTotal += numRead;
        if (numRead == 0 && !socket.waitForReadyRead())
            break;
    }

    return a.exec();
}
