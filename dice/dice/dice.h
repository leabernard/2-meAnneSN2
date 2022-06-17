#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_dice.h"
#include "dede.h"

class dice : public QMainWindow
{
	Q_OBJECT

private:
	dede de;
public:
    dice(QWidget *parent = Q_NULLPTR);

private:
    Ui::diceClass ui;
};
