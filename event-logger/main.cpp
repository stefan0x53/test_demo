#include <QCoreApplication>

#include "messageservice.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    // QT will cleanup MessageService when application dies
    MessageService* service = new MessageService(&app);
    service->startListening();

    return app.exec();
}
