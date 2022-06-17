#include <QtCore/QCoreApplication>
#include "serverTCP.h"
#include "serverWebSocket.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	QtserverWebSocket serverWebSocket(1234);
	QtserverTCP serverTCP(Q_NULLPTR, 4321);
	QSqlDatabase bddserver("host=server user=bart password=simpson dbname=springfield");

	return a.exec();
}
