#include "de.h"
#include <QLocale>

de::de(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	ui.historique->setVisible(false);
	ui.nb2jets->setVisible(false);
	ui.nbrDeJets->setVisible(false);
	ui.remiszero->setVisible(true);
	ui.score->setVisible(true);
	ui.scoretotal->setVisible(true);
	ui.tableWidget->setVisible(false);
	ui.tirageDe->setVisible(true);
	ui.totaldestour->setVisible(true);


	this->ui.tableWidget->setRowCount(10);
	this->ui.tableWidget->setColumnCount(1);
	


}
void de::tirage()
{

	n = rand() % 6 + 1;
	
}

void de::score()
{

	ui.score->setText(QLocale().toString(n));
}


void de::zero()
{
	n = 0;

	ui.score->setText(QLocale().toString(n));
}

void de::total()
{
	this->tableau();
  p += n;
	ui.totaldestour->setText(QLocale().toString(p));
}
 void de::dehistor()
{
	ui.historique->setVisible(true);
	ui.nb2jets->setVisible(true);
	ui.nbrDeJets->setVisible(true);
	ui.remiszero->setVisible(true);
	ui.score->setVisible(true);
	ui.scoretotal->setVisible(true);
	ui.tableWidget->setVisible(true);
	ui.tirageDe->setVisible(true);
	ui.totaldestour->setVisible(true);
	

}

 void de::denormal()
{
	ui.historique->setVisible(false);
	ui.nb2jets->setVisible(false);
	ui.nbrDeJets->setVisible(false);
	ui.remiszero->setVisible(true);
	ui.score->setVisible(true);
	ui.scoretotal->setVisible(true);
	ui.tableWidget->setVisible(false);
	ui.tirageDe->setVisible(true);
	ui.totaldestour->setVisible(true);
	

}
void de::tableau()
{

	int i = 0;

	for (i; i < 10; i++) {
		QTableWidgetItem *value = new QTableWidgetItem(QString::number(n));
		ui.tableWidget->setItem(i, 0, value);
	}
}