/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *btnExit;
    QPushButton *btnClear;
    QPushButton *btn7;
    QPushButton *btnReminder;
    QPushButton *btnPlus;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnMinus;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnMultiply;
    QPushButton *btnMode;
    QPushButton *btn0;
    QPushButton *btnEqual;
    QPushButton *btnDivide;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QLabel *label;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(444, 545);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 20, 301, 91));
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 85, 127);\n"
"font: 9pt \"Modern\";\n"
""));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(70, 130, 61, 51));
        btnExit->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 0, 0);"));
        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(150, 130, 61, 51));
        btnClear->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(70, 200, 61, 51));
        btn7->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btnReminder = new QPushButton(centralwidget);
        btnReminder->setObjectName("btnReminder");
        btnReminder->setGeometry(QRect(230, 130, 61, 51));
        btnReminder->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName("btnPlus");
        btnPlus->setGeometry(QRect(310, 270, 61, 51));
        btnPlus->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(150, 200, 61, 51));
        btn8->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(230, 200, 61, 51));
        btn9->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName("btnMinus");
        btnMinus->setGeometry(QRect(310, 200, 61, 51));
        btnMinus->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(70, 340, 61, 51));
        btn1->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(150, 340, 61, 51));
        btn2->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(230, 340, 61, 51));
        btn3->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(310, 130, 61, 51));
        btnMultiply->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btnMode = new QPushButton(centralwidget);
        btnMode->setObjectName("btnMode");
        btnMode->setGeometry(QRect(70, 410, 61, 51));
        btnMode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 134, 0);\n"
"font: 18pt \"Segoe UI\";"));
        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(150, 410, 61, 51));
        btn0->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btnEqual = new QPushButton(centralwidget);
        btnEqual->setObjectName("btnEqual");
        btnEqual->setGeometry(QRect(230, 410, 141, 51));
        btnEqual->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 42, 62);\n"
"color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(310, 340, 61, 51));
        btnDivide->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(70, 270, 61, 51));
        btn4->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(150, 270, 61, 51));
        btn5->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(230, 270, 61, 51));
        btn6->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);\n"
"background-color: rgb(148, 180, 180);\n"
"font: 18pt \"Segoe UI\";"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 480, 171, 20));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe Print\";\n"
"color: rgb(0, 42, 62);"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(330, 480, 93, 26));
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 42, 62);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 444, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnReminder->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btnPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btnMode->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ahmed Salah", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "DarkMode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
