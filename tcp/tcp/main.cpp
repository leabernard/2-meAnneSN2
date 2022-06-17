#include "tcp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tcp w;
    w.show();
    return a.exec();
}
