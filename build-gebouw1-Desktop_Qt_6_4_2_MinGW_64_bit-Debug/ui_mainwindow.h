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
    QLineEdit *lineEdit;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(670, 431);
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
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(550, 220, 113, 28));
        lineEdit1 = new QLineEdit(centralWidget);
        lineEdit1->setObjectName("lineEdit1");
        lineEdit1->setGeometry(QRect(290, 130, 113, 28));
        lineEdit2 = new QLineEdit(centralWidget);
        lineEdit2->setObjectName("lineEdit2");
        lineEdit2->setGeometry(QRect(270, 240, 113, 28));
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
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
