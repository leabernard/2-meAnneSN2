#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_polymorphisme.h"

class polymorphisme : public QMainWindow
{
    Q_OBJECT

public:
    polymorphisme(QWidget *parent = Q_NULLPTR);

private:
    Ui::polymorphismeClass ui;
};
