#include <QtCore/QCoreApplication>
#include "serverTCP.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	QtserverTCP server(&a);
	return a.exec();
}
