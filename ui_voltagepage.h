/********************************************************************************
** Form generated from reading UI file 'voltagepage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLTAGEPAGE_H
#define UI_VOLTAGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_voltagepage
{
public:
    QGroupBox *VBox1;
    QVBoxLayout *verticalLayout;
    QGroupBox *V1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcd_v1;
    QLabel *label;
    QGroupBox *V2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLCDNumber *lcd_v2;
    QLabel *label_4;
    QGroupBox *V3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLCDNumber *lcd_v3;
    QLabel *label_6;
    QGroupBox *V4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLCDNumber *lcd_v4;
    QLabel *label_8;
    QGroupBox *V5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLCDNumber *lcd_v5;
    QLabel *label_10;
    QGroupBox *V6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLCDNumber *lcd_v6;
    QLabel *label_12;
    QGroupBox *VBox2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *V7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLCDNumber *lcd_v7;
    QLabel *label_14;
    QGroupBox *V8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLCDNumber *lcd_v8;
    QLabel *label_16;
    QGroupBox *V9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_17;
    QLCDNumber *lcd_v9;
    QLabel *label_18;
    QGroupBox *V10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QLCDNumber *lcd_v10;
    QLabel *label_20;
    QGroupBox *V11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_21;
    QLCDNumber *lcd_v11;
    QLabel *label_22;
    QGroupBox *V12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_23;
    QLCDNumber *lcd_v12;
    QLabel *label_24;

    void setupUi(QWidget *voltagepage)
    {
        if (voltagepage->objectName().isEmpty())
            voltagepage->setObjectName("voltagepage");
        voltagepage->resize(661, 451);
        VBox1 = new QGroupBox(voltagepage);
        VBox1->setObjectName("VBox1");
        VBox1->setGeometry(QRect(50, 20, 224, 392));
        verticalLayout = new QVBoxLayout(VBox1);
        verticalLayout->setObjectName("verticalLayout");
        V1 = new QGroupBox(VBox1);
        V1->setObjectName("V1");
        horizontalLayout = new QHBoxLayout(V1);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(V1);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lcd_v1 = new QLCDNumber(V1);
        lcd_v1->setObjectName("lcd_v1");

        horizontalLayout->addWidget(lcd_v1);

        label = new QLabel(V1);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(V1);

        V2 = new QGroupBox(VBox1);
        V2->setObjectName("V2");
        horizontalLayout_2 = new QHBoxLayout(V2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(V2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lcd_v2 = new QLCDNumber(V2);
        lcd_v2->setObjectName("lcd_v2");

        horizontalLayout_2->addWidget(lcd_v2);

        label_4 = new QLabel(V2);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addWidget(V2);

        V3 = new QGroupBox(VBox1);
        V3->setObjectName("V3");
        horizontalLayout_3 = new QHBoxLayout(V3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(V3);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        lcd_v3 = new QLCDNumber(V3);
        lcd_v3->setObjectName("lcd_v3");

        horizontalLayout_3->addWidget(lcd_v3);

        label_6 = new QLabel(V3);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addWidget(V3);

        V4 = new QGroupBox(VBox1);
        V4->setObjectName("V4");
        horizontalLayout_4 = new QHBoxLayout(V4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(V4);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        lcd_v4 = new QLCDNumber(V4);
        lcd_v4->setObjectName("lcd_v4");

        horizontalLayout_4->addWidget(lcd_v4);

        label_8 = new QLabel(V4);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);


        verticalLayout->addWidget(V4);

        V5 = new QGroupBox(VBox1);
        V5->setObjectName("V5");
        horizontalLayout_5 = new QHBoxLayout(V5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(V5);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        lcd_v5 = new QLCDNumber(V5);
        lcd_v5->setObjectName("lcd_v5");

        horizontalLayout_5->addWidget(lcd_v5);

        label_10 = new QLabel(V5);
        label_10->setObjectName("label_10");

        horizontalLayout_5->addWidget(label_10);


        verticalLayout->addWidget(V5);

        V6 = new QGroupBox(VBox1);
        V6->setObjectName("V6");
        horizontalLayout_6 = new QHBoxLayout(V6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_11 = new QLabel(V6);
        label_11->setObjectName("label_11");

        horizontalLayout_6->addWidget(label_11);

        lcd_v6 = new QLCDNumber(V6);
        lcd_v6->setObjectName("lcd_v6");

        horizontalLayout_6->addWidget(lcd_v6);

        label_12 = new QLabel(V6);
        label_12->setObjectName("label_12");

        horizontalLayout_6->addWidget(label_12);


        verticalLayout->addWidget(V6);

        VBox2 = new QGroupBox(voltagepage);
        VBox2->setObjectName("VBox2");
        VBox2->setGeometry(QRect(370, 20, 224, 392));
        verticalLayout_2 = new QVBoxLayout(VBox2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        V7 = new QGroupBox(VBox2);
        V7->setObjectName("V7");
        horizontalLayout_7 = new QHBoxLayout(V7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_13 = new QLabel(V7);
        label_13->setObjectName("label_13");

        horizontalLayout_7->addWidget(label_13);

        lcd_v7 = new QLCDNumber(V7);
        lcd_v7->setObjectName("lcd_v7");

        horizontalLayout_7->addWidget(lcd_v7);

        label_14 = new QLabel(V7);
        label_14->setObjectName("label_14");

        horizontalLayout_7->addWidget(label_14);


        verticalLayout_2->addWidget(V7);

        V8 = new QGroupBox(VBox2);
        V8->setObjectName("V8");
        horizontalLayout_8 = new QHBoxLayout(V8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_15 = new QLabel(V8);
        label_15->setObjectName("label_15");

        horizontalLayout_8->addWidget(label_15);

        lcd_v8 = new QLCDNumber(V8);
        lcd_v8->setObjectName("lcd_v8");

        horizontalLayout_8->addWidget(lcd_v8);

        label_16 = new QLabel(V8);
        label_16->setObjectName("label_16");

        horizontalLayout_8->addWidget(label_16);


        verticalLayout_2->addWidget(V8);

        V9 = new QGroupBox(VBox2);
        V9->setObjectName("V9");
        horizontalLayout_9 = new QHBoxLayout(V9);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_17 = new QLabel(V9);
        label_17->setObjectName("label_17");

        horizontalLayout_9->addWidget(label_17);

        lcd_v9 = new QLCDNumber(V9);
        lcd_v9->setObjectName("lcd_v9");

        horizontalLayout_9->addWidget(lcd_v9);

        label_18 = new QLabel(V9);
        label_18->setObjectName("label_18");

        horizontalLayout_9->addWidget(label_18);


        verticalLayout_2->addWidget(V9);

        V10 = new QGroupBox(VBox2);
        V10->setObjectName("V10");
        horizontalLayout_10 = new QHBoxLayout(V10);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_19 = new QLabel(V10);
        label_19->setObjectName("label_19");

        horizontalLayout_10->addWidget(label_19);

        lcd_v10 = new QLCDNumber(V10);
        lcd_v10->setObjectName("lcd_v10");

        horizontalLayout_10->addWidget(lcd_v10);

        label_20 = new QLabel(V10);
        label_20->setObjectName("label_20");

        horizontalLayout_10->addWidget(label_20);


        verticalLayout_2->addWidget(V10);

        V11 = new QGroupBox(VBox2);
        V11->setObjectName("V11");
        horizontalLayout_11 = new QHBoxLayout(V11);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_21 = new QLabel(V11);
        label_21->setObjectName("label_21");

        horizontalLayout_11->addWidget(label_21);

        lcd_v11 = new QLCDNumber(V11);
        lcd_v11->setObjectName("lcd_v11");

        horizontalLayout_11->addWidget(lcd_v11);

        label_22 = new QLabel(V11);
        label_22->setObjectName("label_22");

        horizontalLayout_11->addWidget(label_22);


        verticalLayout_2->addWidget(V11);

        V12 = new QGroupBox(VBox2);
        V12->setObjectName("V12");
        horizontalLayout_12 = new QHBoxLayout(V12);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_23 = new QLabel(V12);
        label_23->setObjectName("label_23");

        horizontalLayout_12->addWidget(label_23);

        lcd_v12 = new QLCDNumber(V12);
        lcd_v12->setObjectName("lcd_v12");

        horizontalLayout_12->addWidget(lcd_v12);

        label_24 = new QLabel(V12);
        label_24->setObjectName("label_24");

        horizontalLayout_12->addWidget(label_24);


        verticalLayout_2->addWidget(V12);


        retranslateUi(voltagepage);

        QMetaObject::connectSlotsByName(voltagepage);
    } // setupUi

    void retranslateUi(QWidget *voltagepage)
    {
        voltagepage->setWindowTitle(QCoreApplication::translate("voltagepage", "Form", nullptr));
        VBox1->setTitle(QString());
        V1->setTitle(QCoreApplication::translate("voltagepage", "V1", nullptr));
        label_2->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V2->setTitle(QCoreApplication::translate("voltagepage", "V2", nullptr));
        label_3->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_4->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V3->setTitle(QCoreApplication::translate("voltagepage", "V3", nullptr));
        label_5->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_6->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V4->setTitle(QCoreApplication::translate("voltagepage", "V4", nullptr));
        label_7->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_8->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V5->setTitle(QCoreApplication::translate("voltagepage", "V5", nullptr));
        label_9->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_10->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V6->setTitle(QCoreApplication::translate("voltagepage", "V6", nullptr));
        label_11->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_12->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        VBox2->setTitle(QString());
        V7->setTitle(QCoreApplication::translate("voltagepage", "V7", nullptr));
        label_13->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_14->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V8->setTitle(QCoreApplication::translate("voltagepage", "V8", nullptr));
        label_15->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_16->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V9->setTitle(QCoreApplication::translate("voltagepage", "V9", nullptr));
        label_17->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_18->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V10->setTitle(QCoreApplication::translate("voltagepage", "V10", nullptr));
        label_19->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_20->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V11->setTitle(QCoreApplication::translate("voltagepage", "V11", nullptr));
        label_21->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_22->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
        V12->setTitle(QCoreApplication::translate("voltagepage", "V12", nullptr));
        label_23->setText(QCoreApplication::translate("voltagepage", "   \347\224\265\345\216\213", nullptr));
        label_24->setText(QCoreApplication::translate("voltagepage", "mV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class voltagepage: public Ui_voltagepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLTAGEPAGE_H
