/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboCountry;
    QLineEdit *textZipCode;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QTextEdit *labelJSonText;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *btn_go;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 602);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        comboCountry = new QComboBox(centralwidget);
        comboCountry->setObjectName("comboCountry");
        comboCountry->setGeometry(QRect(210, 20, 241, 25));
        textZipCode = new QLineEdit(centralwidget);
        textZipCode->setObjectName("textZipCode");
        textZipCode->setGeometry(QRect(490, 20, 113, 25));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 80, 691, 211));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 40, 161, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 40, 101, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 80, 70, 90));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(44);
        label_4->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 100, 67, 20));
        QFont font1;
        font1.setPointSize(14);
        label_5->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 130, 61, 21));
        QFont font2;
        font2.setPointSize(22);
        label_6->setFont(font2);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 90, 67, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(200, 130, 67, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 90, 61, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(290, 130, 61, 17));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(360, 90, 61, 17));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(360, 130, 61, 17));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(430, 90, 61, 17));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(430, 130, 61, 17));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(30, 170, 61, 17));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(120, 170, 61, 17));
        labelJSonText = new QTextEdit(centralwidget);
        labelJSonText->setObjectName("labelJSonText");
        labelJSonText->setGeometry(QRect(40, 310, 691, 231));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 20, 150, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        btn_go = new QPushButton(centralwidget);
        btn_go->setObjectName("btn_go");
        btn_go->setGeometry(QRect(640, 20, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Current Weather", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Weather Description", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Weather Logo", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Wind", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Humidity", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Country", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Chicago", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "USA", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Real Feel", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "175", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Country", nullptr));
        btn_go->setText(QCoreApplication::translate("MainWindow", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
