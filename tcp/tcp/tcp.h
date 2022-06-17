#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_tcp.h"
#include <qtcpsocket.h>
#include <qtcpserver.h>


class tcp : public QMainWindow
{
    Q_OBJECT

public:
    tcp(QWidget *parent = Q_NULLPTR);

private:
    Ui::tcpClass ui;
	QTcpSocket * socket;
	QTcpServer * server;

public slots:
	void  onDisplayMessageButtonClicked();
	void onConnectButtonClicked();

	void onSocketConnected();
	void onSocketDisconnected();
	void onSendMessageButtonClicked();
	void onSocketReadyRead();

	void onServerNewConnection();
	void onClientDisconnected();
	void onClientReadyRead();

};
