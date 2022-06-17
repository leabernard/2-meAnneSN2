/********************************************************************************
** Form generated from reading UI file 'tcp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_H
#define UI_TCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcpClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *connexion;
    QPushButton *envoyer;
    QPushButton *message;
    QLineEdit *IPlineEdit;
    QLineEdit *PortlineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *tcpClass)
    {
        if (tcpClass->objectName().isEmpty())
            tcpClass->setObjectName(QString::fromUtf8("tcpClass"));
        tcpClass->resize(748, 400);
        centralWidget = new QWidget(tcpClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(326, 2, 331, 71));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 47, 13));
        connexion = new QPushButton(centralWidget);
        connexion->setObjectName(QString::fromUtf8("connexion"));
        connexion->setGeometry(QRect(70, 180, 75, 23));
        envoyer = new QPushButton(centralWidget);
        envoyer->setObjectName(QString::fromUtf8("envoyer"));
        envoyer->setGeometry(QRect(70, 230, 75, 23));
        message = new QPushButton(centralWidget);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(380, 280, 181, 41));
        IPlineEdit = new QLineEdit(centralWidget);
        IPlineEdit->setObjectName(QString::fromUtf8("IPlineEdit"));
        IPlineEdit->setGeometry(QRect(60, 40, 113, 20));
        PortlineEdit = new QLineEdit(centralWidget);
        PortlineEdit->setObjectName(QString::fromUtf8("PortlineEdit"));
        PortlineEdit->setGeometry(QRect(60, 70, 113, 20));
        tcpClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(tcpClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 748, 21));
        tcpClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(tcpClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        tcpClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(tcpClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        tcpClass->setStatusBar(statusBar);

        retranslateUi(tcpClass);
        QObject::connect(envoyer, SIGNAL(clicked(bool)), tcpClass, SLOT(onSendMessageButtonClicked()));
        QObject::connect(connexion, SIGNAL(clicked()), tcpClass, SLOT(onDisplayMessageButtonClicked()));

        QMetaObject::connectSlotsByName(tcpClass);
    } // setupUi

    void retranslateUi(QMainWindow *tcpClass)
    {
        tcpClass->setWindowTitle(QCoreApplication::translate("tcpClass", "tcp", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("tcpClass", "IP :", nullptr));
        label_3->setText(QCoreApplication::translate("tcpClass", "Port :", nullptr));
        connexion->setText(QCoreApplication::translate("tcpClass", "connexion", nullptr));
        envoyer->setText(QCoreApplication::translate("tcpClass", "envoyer", nullptr));
        message->setText(QCoreApplication::translate("tcpClass", "Afficher le message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tcpClass: public Ui_tcpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_H
