#include "initiationQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    initiationQt w;
    w.show();
    return a.exec();
}
