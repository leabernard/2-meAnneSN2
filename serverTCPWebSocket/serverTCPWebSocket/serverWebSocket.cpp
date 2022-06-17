#include "serverWebSocket.h"
#include <QDebug>

QtserverWebSocket::QtserverWebSocket(uint16_t port)
	: websocketServer(new QWebSocketServer(QStringLiteral("Server WebSocket"), QWebSocketServer::NonSecureMode))
{
	if (this->websocketServer->listen(QHostAddress::AnyIPv4, port)) {
		qInfo() << "Server WebSocket: Nouvelle connexion";
		QObject::connect(websocketServer.get(), SIGNAL(newConnection()), this, SLOT(onNewConnection()));
	}
	else{
		qInfo() << "Server WebSocket: Erreur d'ecoute IP ou Port";
	}
}

void QtserverWebSocket::onNewConnection(){
	QWebSocketPtr socket(this->websocketServer->nextPendingConnection());
	QObject::connect(socket.get(), SIGNAL(textMessageReceived(const QString&)), this, SLOT(processTextMessage(const QString&)));
	QObject::connect(socket.get(), SIGNAL(disconnected()), this, SLOT(socketDisconnected()));

	this->clients.append(socket);
}

void QtserverWebSocket::processTextMessage(const QString& message){
	qInfo() << "Server WebSocket: " << message;
	if (message.startsWith("Auth") == true) {
		QString data = QStringRef(&message, 4, message.length() - 4).toString();
		QString login = data.section(";", 0, 0);
		QString mdp = data.section(";", 1, 1);
		
	}
	if (message.startsWith("Salt") == true) {
		QString data = QStringRef(&message, 4, message.length() - 4).toString();
		QString login = data.section(";", 0, 0);
		QString mdp = data.section(";", 1, 1);
	}
	if (message.startsWith("Bdd") == true) {
		QString data = QStringRef(&message, 3, message.length() - 3).toString();
	}
}

void QtserverWebSocket::socketDisconnected(){
	qInfo() << "Server WebSocket: Deconnexion";
}