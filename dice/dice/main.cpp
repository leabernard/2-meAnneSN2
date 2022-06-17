#include "dice.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dice w;
    w.show();
    return a.exec();
}
