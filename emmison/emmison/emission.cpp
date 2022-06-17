#include "emission.h"
#include <QSerialPort>
#include <QSerialPortInfo>


emission::emission(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

QList<QSerialPortInfo> availablePorts = QSerialPortInfo::availablePorts();

	for (int i = 0; i < availablePorts.size(); i++)
	{

		QSerialPortInfo info = availablePorts[i];
	
		ui.comboBox->addItem(info.portName(), QVariant(info.portName()));


	}
	
}
void emission::onOpenPortButtonClicked()
	{
		if (ui.comboBox->currentIndex() >= 0)
		{
			 port = new QSerialPort(ui.comboBox->currentText());
			QObject::connect(port, SIGNAL(readyRead()), this, SLOT(onSerialPortReadyRead()));
			port->setBaudRate(9600);
			port->setDataBits(QSerialPort::DataBits::Data8);
			port->setParity(QSerialPort::Parity::NoParity);
			port->setStopBits(QSerialPort::StopBits::OneStop);
			if (port->open(QIODevice::OpenModeFlag::ExistingOnly | QIODevice::OpenModeFlag::ReadWrite));
			{

				ui.label_2->setText("status port : ouvert");
			}

		}
	}

void emission::onSerialPortReadyRead()
{

	QByteArray Data = port->read(port->read(port->bytesAvailable()));
	QString str(Data);
	ui.textEdit->insertPlainText(str);

}

void emission ::onSendMessageButtonClicked()
{
	if (port->isOpen())
	{
		port->write(ui.lineEdit->text().toStdString().c_str());
	}

}