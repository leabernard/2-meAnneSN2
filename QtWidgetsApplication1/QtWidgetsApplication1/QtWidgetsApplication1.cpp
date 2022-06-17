#include "QtWidgetsApplication1.h"

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	socket = new QTcpSocket(this);

	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
	QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(onSocketReadyRead()));


}  


void QtWidgetsApplication1::onDisplayMessageButtonClicked()
{
	
	QString ip = ui.IPlineEdit->text();
	QString port = ui.portlineEdit->text();
	

	bool ok;

	int portAsInt = port.toInt(&ok);
	if (ok)
	{
		socket->connectToHost(ip, portAsInt);
	}


	
}
void QtWidgetsApplication1::onSocketConnected()
{
	ui.label->setText("satus connexion : connecter");



}
void QtWidgetsApplication1::onSocketDisconnected()
	{
	ui.label->setText("satus connexion : deconnecter");


	}
void QtWidgetsApplication1:: onSendMessageButtonClicked()
 {
	if (socket->state()== QTcpSocket::ConnectedState)
	{
		socket->write("bonsoir !\n");
	}
	
  }

void QtWidgetsApplication1::onSocketReadyRead()
{
	ui.label->setText("status connexion : des donne ont ete recus depui le serveur");
}
void QtWidgetsApplication1::onSocketReadyRead()
{
	QByteArray data = socket->read(socket->bytesAvailable());




 }