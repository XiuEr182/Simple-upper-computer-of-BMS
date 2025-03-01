/********************************************************************************
** Form generated from reading UI file 'DiagPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGPAGE_H
#define UI_DIAGPAGE_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiagPage
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QPushButton *btnClear;
    QPushButton *btnStartAndStop;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_6;
    QLabel *label_15;
    QLabel *label_14;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_7;
    QLabel *label_16;
    QLabel *label_17;
    QChartView *chartview2;
    QChartView *chartview4;
    QChartView *chartview3;
    QChartView *chartview1;

    void setupUi(QWidget *DiagPage)
    {
        if (DiagPage->objectName().isEmpty())
            DiagPage->setObjectName("DiagPage");
        DiagPage->resize(1700, 1200);
        DiagPage->setMinimumSize(QSize(1700, 1200));
        horizontalLayout = new QHBoxLayout(DiagPage);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBox = new QGroupBox(DiagPage);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 80));
        groupBox->setMaximumSize(QSize(16777215, 120));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(40, 30, 81, 81));
        btnStartAndStop = new QPushButton(groupBox);
        btnStartAndStop->setObjectName("btnStartAndStop");
        btnStartAndStop->setGeometry(QRect(180, 30, 81, 81));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(330, 30, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setTextFormat(Qt::TextFormat::PlainText);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4->setWordWrap(false);
        label_4->setIndent(-1);

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setTextFormat(Qt::TextFormat::PlainText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(550, 30, 160, 80));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setTextFormat(Qt::TextFormat::PlainText);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setTextFormat(Qt::TextFormat::PlainText);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8->setWordWrap(false);
        label_8->setIndent(-1);

        gridLayout_2->addWidget(label_8, 1, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(groupBox);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(760, 30, 160, 80));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName("label_10");
        label_10->setTextFormat(Qt::TextFormat::PlainText);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(groupBox);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(970, 30, 160, 80));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget_4);
        label_12->setObjectName("label_12");
        label_12->setTextFormat(Qt::TextFormat::PlainText);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_4);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(groupBox);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(1180, 30, 160, 80));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(gridLayoutWidget_5);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(label_15, 2, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_5);
        label_14->setObjectName("label_14");
        label_14->setTextFormat(Qt::TextFormat::PlainText);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(label_14, 1, 0, 1, 1);

        gridLayoutWidget_6 = new QWidget(groupBox);
        gridLayoutWidget_6->setObjectName("gridLayoutWidget_6");
        gridLayoutWidget_6->setGeometry(QRect(1390, 30, 160, 80));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(gridLayoutWidget_6);
        label_16->setObjectName("label_16");
        label_16->setTextFormat(Qt::TextFormat::PlainText);
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(label_16, 0, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_6);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(label_17, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 1, 0, 1, 2);

        chartview2 = new QChartView(DiagPage);
        chartview2->setObjectName("chartview2");
        chartview2->setMinimumSize(QSize(200, 200));
        chartview2->setMaximumSize(QSize(800, 500));

        gridLayout_5->addWidget(chartview2, 2, 1, 1, 1);

        chartview4 = new QChartView(DiagPage);
        chartview4->setObjectName("chartview4");
        chartview4->setMinimumSize(QSize(200, 200));
        chartview4->setMaximumSize(QSize(800, 500));

        gridLayout_5->addWidget(chartview4, 3, 1, 1, 1);

        chartview3 = new QChartView(DiagPage);
        chartview3->setObjectName("chartview3");
        chartview3->setMinimumSize(QSize(200, 200));
        chartview3->setMaximumSize(QSize(800, 500));

        gridLayout_5->addWidget(chartview3, 3, 0, 1, 1);

        chartview1 = new QChartView(DiagPage);
        chartview1->setObjectName("chartview1");
        chartview1->setMinimumSize(QSize(200, 200));
        chartview1->setMaximumSize(QSize(800, 500));

        gridLayout_5->addWidget(chartview1, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_5);


        retranslateUi(DiagPage);

        QMetaObject::connectSlotsByName(DiagPage);
    } // setupUi

    void retranslateUi(QWidget *DiagPage)
    {
        DiagPage->setWindowTitle(QCoreApplication::translate("DiagPage", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DiagPage", "\345\237\272\344\272\216\347\224\265\345\216\213\344\277\241\345\217\267\347\232\204\346\225\205\351\232\234\350\257\212\346\226\255\344\277\241\346\201\257", nullptr));
        btnClear->setText(QCoreApplication::translate("DiagPage", "\346\270\205\351\231\244\346\225\205\351\232\234", nullptr));
        btnStartAndStop->setText(QCoreApplication::translate("DiagPage", "\345\220\257\345\212\250\350\257\212\346\226\255", nullptr));
        label_2->setText(QCoreApplication::translate("DiagPage", "4.095", nullptr));
        label_3->setText(QCoreApplication::translate("DiagPage", "\344\275\215\347\275\256", nullptr));
        label_4->setText(QCoreApplication::translate("DiagPage", "Cell 10", nullptr));
        label->setText(QCoreApplication::translate("DiagPage", "\346\234\200\351\253\230\347\224\265\345\216\213", nullptr));
        label_5->setText(QCoreApplication::translate("DiagPage", "4.045 V", nullptr));
        label_6->setText(QCoreApplication::translate("DiagPage", "\346\234\200\344\275\216\347\224\265\345\216\213", nullptr));
        label_7->setText(QCoreApplication::translate("DiagPage", "\344\275\215\347\275\256", nullptr));
        label_8->setText(QCoreApplication::translate("DiagPage", "Cell 2", nullptr));
        label_10->setText(QCoreApplication::translate("DiagPage", "\346\225\205\351\232\234\347\261\273\345\236\213", nullptr));
        label_11->setText(QCoreApplication::translate("DiagPage", "\347\237\255\350\267\257\346\225\205\351\232\234", nullptr));
        label_12->setText(QCoreApplication::translate("DiagPage", "\346\225\205\351\232\234\344\275\215\347\275\256", nullptr));
        label_13->setText(QCoreApplication::translate("DiagPage", "Cell 2", nullptr));
        label_15->setText(QCoreApplication::translate("DiagPage", "1.38", nullptr));
        label_14->setText(QCoreApplication::translate("DiagPage", "\347\233\270\344\274\274\347\250\213\345\272\246M", nullptr));
        label_16->setText(QCoreApplication::translate("DiagPage", "\346\236\201\346\200\247P", nullptr));
        label_17->setText(QCoreApplication::translate("DiagPage", "\350\264\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiagPage: public Ui_DiagPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGPAGE_H
