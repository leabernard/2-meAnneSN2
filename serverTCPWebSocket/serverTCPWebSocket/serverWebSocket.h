#pragma once
#ifndef __INSPECTION_SERVER_HPP__
#define __INSPECTION_SERVER_HPP__

#include <QObject>
#include <QWebSocket>
#include <QWebSocketServer>
#include <QtSql>
#include <QSqlDatabase>
#include <iostream>
#include <memory>

class QtserverWebSocket;

typedef std::shared_ptr<QWebSocketServer> QWebSocketServerPtr;
typedef std::shared_ptr<QWebSocket> QWebSocketPtr;
typedef std::shared_ptr<QtserverWebSocket> QtserverWebSocketPtr;

class QtserverWebSocket : public QObject
{
	Q_OBJECT

	QWebSocketServerPtr websocketServer;
	QList<QWebSocketPtr> clients;

public:
	QtserverWebSocket(uint16_t port);
	QSqlDatabase bddserver;

signals:
	void closed();

private slots:
	void onNewConnection();
	void processTextMessage(const QString& message);
	void socketDisconnected();

};

#endif#pragma once
