/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLCDNumber *totall_V;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLCDNumber *totall_A;
    QLabel *label_4;
    QLabel *label_5;
    QLCDNumber *SOP;
    QLabel *label_6;
    QPushButton *SingleVoltageButton;
    QPushButton *SingleTemButton;
    QLabel *label_7;
    QLabel *label_led2;
    QLabel *label_led3;
    QLabel *label_12;
    QLabel *label_led1;
    QLabel *label_10;
    QPushButton *ButtonOpenCAN;
    QPushButton *ButtonCloseCAN;
    QLabel *ConnectState;
    QPushButton *SingleDiagPage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 655);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        totall_V = new QLCDNumber(centralWidget);
        totall_V->setObjectName("totall_V");
        totall_V->setGeometry(QRect(130, 60, 64, 23));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 60, 41, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 61, 31, 21));
        QFont font;
        font.setPointSize(13);
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 100, 41, 21));
        totall_A = new QLCDNumber(centralWidget);
        totall_A->setObjectName("totall_A");
        totall_A->setGeometry(QRect(130, 100, 64, 23));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 100, 41, 21));
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 140, 41, 21));
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);
        SOP = new QLCDNumber(centralWidget);
        SOP->setObjectName("SOP");
        SOP->setGeometry(QRect(130, 140, 64, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 140, 41, 21));
        QFont font2;
        font2.setPointSize(11);
        label_6->setFont(font2);
        SingleVoltageButton = new QPushButton(centralWidget);
        SingleVoltageButton->setObjectName("SingleVoltageButton");
        SingleVoltageButton->setGeometry(QRect(20, 180, 121, 23));
        SingleTemButton = new QPushButton(centralWidget);
        SingleTemButton->setObjectName("SingleTemButton");
        SingleTemButton->setGeometry(QRect(150, 180, 121, 23));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 100, 61, 20));
        label_led2 = new QLabel(centralWidget);
        label_led2->setObjectName("label_led2");
        label_led2->setGeometry(QRect(330, 100, 54, 21));
        label_led3 = new QLabel(centralWidget);
        label_led3->setObjectName("label_led3");
        label_led3->setGeometry(QRect(330, 140, 54, 21));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(260, 140, 61, 20));
        label_led1 = new QLabel(centralWidget);
        label_led1->setObjectName("label_led1");
        label_led1->setGeometry(QRect(330, 60, 54, 21));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(260, 60, 61, 20));
        ButtonOpenCAN = new QPushButton(centralWidget);
        ButtonOpenCAN->setObjectName("ButtonOpenCAN");
        ButtonOpenCAN->setGeometry(QRect(80, 30, 61, 21));
        ButtonCloseCAN = new QPushButton(centralWidget);
        ButtonCloseCAN->setObjectName("ButtonCloseCAN");
        ButtonCloseCAN->setGeometry(QRect(150, 30, 61, 21));
        ConnectState = new QLabel(centralWidget);
        ConnectState->setObjectName("ConnectState");
        ConnectState->setGeometry(QRect(300, 30, 41, 16));
        SingleDiagPage = new QPushButton(centralWidget);
        SingleDiagPage->setObjectName("SingleDiagPage");
        SingleDiagPage->setGeometry(QRect(280, 180, 121, 23));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\200\273\347\224\265\345\216\213", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\200\273\347\224\265\346\265\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "mA", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "SOP", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        SingleVoltageButton->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\275\223\347\224\265\345\216\213", nullptr));
        SingleTemButton->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\275\223\346\270\251\345\272\246", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\205\205\347\224\265\347\212\266\346\200\201", nullptr));
        label_led2->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\205\205\347\224\265", nullptr));
        label_led3->setText(QCoreApplication::translate("MainWindow", "\346\234\252\346\224\276\347\224\265", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\346\224\276\347\224\265\347\212\266\346\200\201", nullptr));
        label_led1->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\347\273\247\347\224\265\345\231\250\347\212\266\346\200\201", nullptr));
        ButtonOpenCAN->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200CAN", nullptr));
        ButtonCloseCAN->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255CAN", nullptr));
        ConnectState->setText(QCoreApplication::translate("MainWindow", "\346\234\252\350\277\236\346\216\245", nullptr));
        SingleDiagPage->setText(QCoreApplication::translate("MainWindow", "\350\257\212\346\226\255\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
