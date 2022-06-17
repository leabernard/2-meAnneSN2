/********************************************************************************
** Form generated from reading UI file 'emission.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMISSION_H
#define UI_EMISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emissionClass
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *emissionClass)
    {
        if (emissionClass->objectName().isEmpty())
            emissionClass->setObjectName(QString::fromUtf8("emissionClass"));
        emissionClass->resize(600, 400);
        centralWidget = new QWidget(emissionClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 10, 111, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 81, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 50, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 20, 121, 20));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 110, 501, 171));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 310, 471, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 310, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 90, 101, 16));
        emissionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(emissionClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        emissionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(emissionClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        emissionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(emissionClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        emissionClass->setStatusBar(statusBar);

        retranslateUi(emissionClass);

        QMetaObject::connectSlotsByName(emissionClass);
    } // setupUi

    void retranslateUi(QMainWindow *emissionClass)
    {
        emissionClass->setWindowTitle(QCoreApplication::translate("emissionClass", "emmison", nullptr));
        label->setText(QCoreApplication::translate("emissionClass", "      port :", nullptr));
        pushButton->setText(QCoreApplication::translate("emissionClass", "ouvrir le port", nullptr));
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("emissionClass", "envoyer", nullptr));
        label_3->setText(QCoreApplication::translate("emissionClass", "<html><head/><body><p><span style=\" font-size:9pt;\">donn\303\251e re\303\247ues</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emissionClass: public Ui_emissionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMISSION_H
