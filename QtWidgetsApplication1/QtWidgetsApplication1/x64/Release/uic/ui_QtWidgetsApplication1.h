/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

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

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *connexion;
    QLineEdit *IPlineEdit;
    QLineEdit *portlineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *deconnecte;
    QPushButton *envoyer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName(QString::fromUtf8("QtWidgetsApplication1Class"));
        QtWidgetsApplication1Class->resize(483, 400);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 260, 141, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 30, 251, 41));
        connexion = new QPushButton(centralWidget);
        connexion->setObjectName(QString::fromUtf8("connexion"));
        connexion->setGeometry(QRect(70, 180, 101, 31));
        IPlineEdit = new QLineEdit(centralWidget);
        IPlineEdit->setObjectName(QString::fromUtf8("IPlineEdit"));
        IPlineEdit->setGeometry(QRect(80, 50, 113, 20));
        IPlineEdit->setFocusPolicy(Qt::WheelFocus);
        IPlineEdit->setStyleSheet(QString::fromUtf8(""));
        portlineEdit = new QLineEdit(centralWidget);
        portlineEdit->setObjectName(QString::fromUtf8("portlineEdit"));
        portlineEdit->setGeometry(QRect(80, 90, 113, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 40, 41, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 90, 47, 13));
        deconnecte = new QLabel(centralWidget);
        deconnecte->setObjectName(QString::fromUtf8("deconnecte"));
        deconnecte->setGeometry(QRect(330, 120, 111, 51));
        envoyer = new QPushButton(centralWidget);
        envoyer->setObjectName(QString::fromUtf8("envoyer"));
        envoyer->setGeometry(QRect(80, 130, 75, 23));
        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 483, 21));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1Class);
        QObject::connect(connexion, SIGNAL(clicked()), QtWidgetsApplication1Class, SLOT(onDisplayMessageButtonClicked()));
        QObject::connect(envoyer, SIGNAL(clicked()), QtWidgetsApplication1Class, SLOT(onSendMessageButtonClicked()));

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        pushButton->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "affiche message", nullptr));
        label->setText(QString());
        connexion->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "connexion", nullptr));
        IPlineEdit->setInputMask(QString());
        IPlineEdit->setText(QString());
        IPlineEdit->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "ip :", nullptr));
        label_3->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "Port :", nullptr));
        deconnecte->setText(QString());
        envoyer->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
