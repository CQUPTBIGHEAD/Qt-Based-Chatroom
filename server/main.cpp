
#include "mytcpserver.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpServer s;
    s.start("   10.17.199.27",8888);
    return a.exec();
}

