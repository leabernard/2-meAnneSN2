#include "emission.h"
#include <qdebug.h>
#include <QSerialPortInfo>
#include <iostream>
#include <regex>

Emission::Emission(QObject *parent)
	: QObject(parent)
{
	port = new QSerialPort( this );
	QObject::connect(port, SIGNAL(readyRead()), this, SLOT(onSerialPortReadyRead()));
	port->setPortName("COM1");
	port->open(QIODevice::ReadWrite);
		port->setBaudRate(QSerialPort::Baud9600);
		port->setDataBits(QSerialPort::DataBits::Data8);
		port->setParity(QSerialPort::Parity::NoParity);
		port->setStopBits(QSerialPort::StopBits::OneStop);
		port->setFlowControl(QSerialPort::NoFlowControl);
}


void Emission::onSerialPortReadyRead() {

	QByteArray dataR = port->readAll();
	qDebug() << dataR.size();
	data = data + dataR.toStdString().c_str();
	qDebug() << data;

	
}