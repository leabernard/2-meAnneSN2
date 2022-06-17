#define MYSERVER_H;

#include <QObject>
#include <QWebSocketServer>
#include <QHostAddress>
#include <QDebug>

class QtserverWebSocket : public QObject {
	Q_OBJECT
public:
	QtserverWebSocket(QObject *parent = Q_NULLPTR);

public slots:
	void onNewConnection();
	void socketDisconnected();
	void textMessageReceived();

private:
	QtserverWebSocket * socket;
	QtserverWebSocket * server;

};