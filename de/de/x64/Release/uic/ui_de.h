/********************************************************************************
** Form generated from reading UI file 'de.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DE_H
#define UI_DE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deClass
{
public:
    QAction *de;
    QAction *dehisto;
    QAction *actionde;
    QAction *actiondehisto;
    QWidget *centralWidget;
    QLabel *totaldestour;
    QPushButton *remiszero;
    QPushButton *scoretotal;
    QLabel *score;
    QPushButton *tirageDe;
    QPushButton *historique;
    QTableWidget *tableWidget;
    QPushButton *nbrDeJets;
    QLineEdit *nb2jets;
    QMenuBar *menuBar;
    QMenu *menufichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *deClass)
    {
        if (deClass->objectName().isEmpty())
            deClass->setObjectName(QString::fromUtf8("deClass"));
        deClass->resize(636, 398);
        de = new QAction(deClass);
        de->setObjectName(QString::fromUtf8("de"));
        dehisto = new QAction(deClass);
        dehisto->setObjectName(QString::fromUtf8("dehisto"));
        actionde = new QAction(deClass);
        actionde->setObjectName(QString::fromUtf8("actionde"));
        actiondehisto = new QAction(deClass);
        actiondehisto->setObjectName(QString::fromUtf8("actiondehisto"));
        centralWidget = new QWidget(deClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        totaldestour = new QLabel(centralWidget);
        totaldestour->setObjectName(QString::fromUtf8("totaldestour"));
        totaldestour->setGeometry(QRect(180, 100, 91, 41));
        remiszero = new QPushButton(centralWidget);
        remiszero->setObjectName(QString::fromUtf8("remiszero"));
        remiszero->setGeometry(QRect(160, 150, 131, 31));
        scoretotal = new QPushButton(centralWidget);
        scoretotal->setObjectName(QString::fromUtf8("scoretotal"));
        scoretotal->setGeometry(QRect(30, 150, 75, 23));
        score = new QLabel(centralWidget);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(100, 60, 81, 61));
        tirageDe = new QPushButton(centralWidget);
        tirageDe->setObjectName(QString::fromUtf8("tirageDe"));
        tirageDe->setGeometry(QRect(190, 30, 81, 31));
        historique = new QPushButton(centralWidget);
        historique->setObjectName(QString::fromUtf8("historique"));
        historique->setGeometry(QRect(430, 40, 75, 23));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(340, 90, 211, 251));
        nbrDeJets = new QPushButton(centralWidget);
        nbrDeJets->setObjectName(QString::fromUtf8("nbrDeJets"));
        nbrDeJets->setGeometry(QRect(140, 240, 111, 31));
        nb2jets = new QLineEdit(centralWidget);
        nb2jets->setObjectName(QString::fromUtf8("nb2jets"));
        nb2jets->setGeometry(QRect(140, 290, 113, 20));
        deClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(deClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 636, 21));
        menufichier = new QMenu(menuBar);
        menufichier->setObjectName(QString::fromUtf8("menufichier"));
        deClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(deClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        deClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(deClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        deClass->setStatusBar(statusBar);

        menuBar->addAction(menufichier->menuAction());
        menufichier->addAction(actionde);
        menufichier->addAction(actiondehisto);

        retranslateUi(deClass);
        QObject::connect(tirageDe, SIGNAL(clicked()), deClass, SLOT(tirage()));
        QObject::connect(tirageDe, SIGNAL(clicked()), deClass, SLOT(score()));
        QObject::connect(remiszero, SIGNAL(clicked()), deClass, SLOT(zero()));
        QObject::connect(scoretotal, SIGNAL(clicked()), deClass, SLOT(total()));
        QObject::connect(actionde, SIGNAL(triggered(bool)), deClass, SLOT(denormal()));
        QObject::connect(actiondehisto, SIGNAL(triggered()), deClass, SLOT(dehistor()));

        QMetaObject::connectSlotsByName(deClass);
    } // setupUi

    void retranslateUi(QMainWindow *deClass)
    {
        deClass->setWindowTitle(QCoreApplication::translate("deClass", "de", nullptr));
        de->setText(QCoreApplication::translate("deClass", "de", nullptr));
        dehisto->setText(QCoreApplication::translate("deClass", "dehisto", nullptr));
        actionde->setText(QCoreApplication::translate("deClass", "de ", nullptr));
        actiondehisto->setText(QCoreApplication::translate("deClass", "dehisto", nullptr));
        totaldestour->setText(QString());
        remiszero->setText(QCoreApplication::translate("deClass", "remise \303\240 z\303\251ro du score", nullptr));
        scoretotal->setText(QCoreApplication::translate("deClass", "score total", nullptr));
        score->setText(QString());
        tirageDe->setText(QCoreApplication::translate("deClass", "tirer le d\303\251", nullptr));
        historique->setText(QCoreApplication::translate("deClass", "historique", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("deClass", "indice", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("deClass", "valeur", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("deClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("deClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("deClass", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("deClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("deClass", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("deClass", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("deClass", "7", nullptr));
        nbrDeJets->setText(QCoreApplication::translate("deClass", "nombre de jets", nullptr));
        menufichier->setTitle(QCoreApplication::translate("deClass", "fichier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deClass: public Ui_deClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DE_H
