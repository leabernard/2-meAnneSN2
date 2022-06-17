#pragma once

#include <QObject>
#include <QSerialPort>

class Emission : public QObject
{
	Q_OBJECT

public:
	Emission(QObject *parent = Q_NULLPTR);
public slots:
	void onSerialPortReadyRead();
private:
	QSerialPort * port;
	QString data;
};
