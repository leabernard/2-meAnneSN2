#include "serverWebSocket.h"

QtserverWebSocket::QtserverWebSocket(QObject *parent) : QObject(parent){
	socket = new QtserverWebSocket(this);
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onNewConnection()));
	server->listen(QHostAddress::AnyIPv4, 1234);
}

void QtserverWebSocket::onNewConnection() {
	QtserverWebSocket * client = socket->nextPendingConnection();
	QObject::connect(client, SIGNAL(textMessageReceived()), this, SLOT(textMessageReceived()));
}

void QtserverWebSocket::socketDisconnected(){
	QtserverWebSocket * client = socket->nextPendingConnection();
	QObject::connect(client, SIGNAL(textMessageReceived()), this, SLOT(textMessageReceived()));
}

void QtserverWebSocket::textMessageReceived()
{
	QtserverWebSocket * obj = qobject_cast<QtserverWebSocket*>(sender());
	QByteArray data = obj->read(obj->bytesAvailable());
	QString str(data);
	obj->write(data);
}