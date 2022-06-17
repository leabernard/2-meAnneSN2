#include "de.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    de w;
    w.show();
    return a.exec();
}
