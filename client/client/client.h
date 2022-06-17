#pragma once
#include <qtcpsocket.h>
#include <QtWidgets/QMainWindow>
#include "ui_client.h"
#include <qtcpserver.h>

class client : public QMainWindow
{
	Q_OBJECT

public:
	client(QWidget *parent = Q_NULLPTR);

private:
	Ui::clientClass ui;
	QTcpSocket * socket;
	QTcpServer * server;


public slots:
	 void connexion();
	void inscription();
	void onConnectButtonClicked();
	
};
