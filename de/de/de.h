#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_de.h"




class de : public QMainWindow
{
    Q_OBJECT

public:
    de(QWidget *parent = Q_NULLPTR);

private:
    Ui::deClass ui;
	int n;
	int p;

public slots:
	// de de::operator++(int n);
	void tirage();
	void score();
	void zero();
	void total();
	void dehistor();
	void denormal();
	void tableau();
};
