#include <QCoreApplication>
#include <QUdpSocket>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qWarning() << "Hello World";

    QUdpSocket udp;
    QSqlDatabase bd;

    qWarning() << "Class Udp and Sql created";
    return a.exec();
}
