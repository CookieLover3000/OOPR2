/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *sensor_act;
    QPushButton *schuifdeurSensorKnop;
    QPushButton *d1Knop;
    QPushButton *d2Knop;
    QLineEdit *lineEditSchuif1;
    QLineEdit *lineEditDraaiBoven1;
    QLineEdit *lineEditDraaiBeneden1;
    QLineEdit *lineEditDraaiBoven2;
    QLineEdit *lineEditSchuif2;
    QLineEdit *lineEditVoegAutorisatieToe;
    QPushButton *positiveAutorisatieKnop;
    QPushButton *negatieveAutorisatieKnop;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(670, 731);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        sensor_act = new QPushButton(centralWidget);
        sensor_act->setObjectName("sensor_act");
        sensor_act->setGeometry(QRect(510, 100, 31, 31));
        schuifdeurSensorKnop = new QPushButton(centralWidget);
        schuifdeurSensorKnop->setObjectName("schuifdeurSensorKnop");
        schuifdeurSensorKnop->setGeometry(QRect(510, 220, 31, 31));
        d1Knop = new QPushButton(centralWidget);
        d1Knop->setObjectName("d1Knop");
        d1Knop->setGeometry(QRect(250, 130, 31, 31));
        d2Knop = new QPushButton(centralWidget);
        d2Knop->setObjectName("d2Knop");
        d2Knop->setGeometry(QRect(230, 240, 31, 31));
        lineEditSchuif1 = new QLineEdit(centralWidget);
        lineEditSchuif1->setObjectName("lineEditSchuif1");
        lineEditSchuif1->setGeometry(QRect(550, 220, 113, 28));
        lineEditDraaiBoven1 = new QLineEdit(centralWidget);
        lineEditDraaiBoven1->setObjectName("lineEditDraaiBoven1");
        lineEditDraaiBoven1->setGeometry(QRect(290, 130, 113, 28));
        lineEditDraaiBeneden1 = new QLineEdit(centralWidget);
        lineEditDraaiBeneden1->setObjectName("lineEditDraaiBeneden1");
        lineEditDraaiBeneden1->setGeometry(QRect(110, 240, 113, 28));
        lineEditDraaiBoven2 = new QLineEdit(centralWidget);
        lineEditDraaiBoven2->setObjectName("lineEditDraaiBoven2");
        lineEditDraaiBoven2->setGeometry(QRect(290, 100, 113, 24));
        lineEditSchuif2 = new QLineEdit(centralWidget);
        lineEditSchuif2->setObjectName("lineEditSchuif2");
        lineEditSchuif2->setGeometry(QRect(550, 180, 113, 24));
        lineEditVoegAutorisatieToe = new QLineEdit(centralWidget);
        lineEditVoegAutorisatieToe->setObjectName("lineEditVoegAutorisatieToe");
        lineEditVoegAutorisatieToe->setGeometry(QRect(30, 20, 113, 24));
        positiveAutorisatieKnop = new QPushButton(centralWidget);
        positiveAutorisatieKnop->setObjectName("positiveAutorisatieKnop");
        positiveAutorisatieKnop->setGeometry(QRect(40, 50, 31, 31));
        negatieveAutorisatieKnop = new QPushButton(centralWidget);
        negatieveAutorisatieKnop->setObjectName("negatieveAutorisatieKnop");
        negatieveAutorisatieKnop->setGeometry(QRect(100, 50, 31, 31));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 470, 256, 192));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 670, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sensor_act->setText(QCoreApplication::translate("MainWindow", "s1", nullptr));
        schuifdeurSensorKnop->setText(QCoreApplication::translate("MainWindow", "dv", nullptr));
        d1Knop->setText(QCoreApplication::translate("MainWindow", "d1", nullptr));
        d2Knop->setText(QCoreApplication::translate("MainWindow", "d2", nullptr));
        lineEditSchuif1->setText(QString());
        positiveAutorisatieKnop->setText(QCoreApplication::translate("MainWindow", ":)", nullptr));
        negatieveAutorisatieKnop->setText(QCoreApplication::translate("MainWindow", ":(", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
