/********************************************************************************
** Form generated from reading UI file 'dice.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICE_H
#define UI_DICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diceClass
{
public:
    QWidget *centralWidget;
    QPushButton *scoretotal;
    QPushButton *remiszero;
    QLabel *score;
    QPushButton *afficheValeur;
    QPushButton *tirageDe;
    QLabel *totaldestour;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *diceClass)
    {
        if (diceClass->objectName().isEmpty())
            diceClass->setObjectName(QString::fromUtf8("diceClass"));
        diceClass->resize(600, 400);
        centralWidget = new QWidget(diceClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scoretotal = new QPushButton(centralWidget);
        scoretotal->setObjectName(QString::fromUtf8("scoretotal"));
        scoretotal->setGeometry(QRect(130, 220, 75, 23));
        remiszero = new QPushButton(centralWidget);
        remiszero->setObjectName(QString::fromUtf8("remiszero"));
        remiszero->setGeometry(QRect(360, 220, 131, 31));
        score = new QLabel(centralWidget);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(240, 130, 101, 41));
        afficheValeur = new QPushButton(centralWidget);
        afficheValeur->setObjectName(QString::fromUtf8("afficheValeur"));
        afficheValeur->setGeometry(QRect(120, 50, 171, 41));
        tirageDe = new QPushButton(centralWidget);
        tirageDe->setObjectName(QString::fromUtf8("tirageDe"));
        tirageDe->setGeometry(QRect(410, 50, 81, 31));
        totaldestour = new QLabel(centralWidget);
        totaldestour->setObjectName(QString::fromUtf8("totaldestour"));
        totaldestour->setGeometry(QRect(260, 290, 91, 41));
        diceClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(diceClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        diceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(diceClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        diceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(diceClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        diceClass->setStatusBar(statusBar);

        retranslateUi(diceClass);

        QMetaObject::connectSlotsByName(diceClass);
    } // setupUi

    void retranslateUi(QMainWindow *diceClass)
    {
        diceClass->setWindowTitle(QCoreApplication::translate("diceClass", "dice", nullptr));
        scoretotal->setText(QCoreApplication::translate("diceClass", "score total", nullptr));
        remiszero->setText(QCoreApplication::translate("diceClass", "remise \303\240 z\303\251ro du score", nullptr));
        score->setText(QString());
        afficheValeur->setText(QCoreApplication::translate("diceClass", "afficher la valeur du d\303\251", nullptr));
        tirageDe->setText(QCoreApplication::translate("diceClass", "tirer le d\303\251", nullptr));
        totaldestour->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class diceClass: public Ui_diceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICE_H
