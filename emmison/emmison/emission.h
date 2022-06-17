#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_emission.h"
#include <QSerialPort>
#include <qserialportinfo.h>

class emission : public QMainWindow
{
    Q_OBJECT

	public:
		emission(QWidget *parent = Q_NULLPTR);

	private:
		Ui::emissionClass ui;
		void onOpenPortButtonClicked();
		void onSerialPortReadyRead();
		void onSendMessageButtonClicked();
		QSerialPort * port;
};