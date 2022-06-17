#include "tcp.h"

tcp::tcp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	socket = new QTcpSocket(this);
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
	QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(onSocketReadyRead()));

	server = new QTcpServer(this);
	QObject::connect(server, SIGNAL(newConnection()), this, SLOT(onServerNewConection()));
	server->listen(QHostAddress::AnyIPv4, 4321);
}

void tcp::onConnectButtonClicked()
{
	QString ip = ui.IPlineEdit ->text();
	QString port = ui.PortlineEdit->text();

	bool ok;
	int portAsInt = port.toInt(&ok);
	if (ok)
	{
		socket->connectToHost(ip, portAsInt);
	}


}

void tcp::onSocketConnected()
{
	ui.label->setText("status connexion : Connecte");

}

void tcp::onSocketDisconnected()
{
	ui.label->setText("status connexion : Déconnecte");

}


void tcp::onSendMessageButtonClicked()
{

	socket->write("hello server!\n");
}



void tcp::onSocketReadyRead()
{
	QByteArray data = socket->read(socket->bytesAvailable());
	QString str(data);
	ui.label->setText("status connexion : message reçu = " + str);

}

void tcp::onServerNewConnection()
{
	ui.label->setText("un client s'est connecté");
	QTcpSocket * client = server->nextPendingConnection();
	QObject::connect(client, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
	QObject::connect(client, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));

}

void tcp::onClientDisconnected()
{

}

void tcp::onClientReadyRead()
{


}