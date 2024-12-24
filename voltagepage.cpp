#include "voltagepage.h"
#include "ui_voltagepage.h"

voltagepage::voltagepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::voltagepage)
{
    ui->setupUi(this);

    //lcd_v1
    ui->lcd_v1->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v1->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v1= 0.13; // 设置初始值
//    ui->lcd_v1->display(initialValue_v1); // 显示初始值

   //lcd_v2
   ui->lcd_v2->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
   ui->lcd_v2->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
   // 设置 LCD 数字显示的初始值
//   double initialValue_v2 = 0.13; // 设置初始值
//    ui->lcd_v2->display(initialValue_v2); // 显示初始值

      //lcd_v3
      ui->lcd_v3->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
      ui->lcd_v3->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
      // 设置 LCD 数字显示的初始值
//      double initialValue_v3 = 0.13; // 设置初始值
//     ui->lcd_v3->display(initialValue_v3); // 显示初始值

     //lcd_v4
     ui->lcd_v4->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
     ui->lcd_v4->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
     // 设置 LCD 数字显示的初始值
//     double initialValue_v4 = 0.13; // 设置初始值
//    ui->lcd_v4->display(initialValue_v4); // 显示初始值

    //lcd_v5
    ui->lcd_v5->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v5->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v5 = 0.13; // 设置初始值
//    ui->lcd_v5->display(initialValue_v5); // 显示初始值

    //lcd_v6
    ui->lcd_v6->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v6->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v6 = 0.13; // 设置初始值
//    ui->lcd_v6->display(initialValue_v6); // 显示初始值

    //lcd_v7
    ui->lcd_v7->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v7->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v7 = 0.13; // 设置初始值
//    ui->lcd_v7->display(initialValue_v7); // 显示初始值

    //lcd_v8
    ui->lcd_v8->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v8->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v8 = 0.13; // 设置初始值
//    ui->lcd_v8->display(initialValue_v8); // 显示初始值

    //lcd_v9
    ui->lcd_v9->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v9->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v9 = 0.13; // 设置初始值
//    ui->lcd_v9->display(initialValue_v9); // 显示初始值

    //lcd_v10
    ui->lcd_v10->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v10->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v10 = 0.13; // 设置初始值
//    ui->lcd_v10->display(initialValue_v10); // 显示初始值

    //lcd_v11
    ui->lcd_v11->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v11->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v11 = 0.13; // 设置初始值
//    ui->lcd_v11->display(initialValue_v11); // 显示初始值

    //lcd_v12
    ui->lcd_v12->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_v12->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_v12 = 0.13; // 设置初始值
//    ui->lcd_v12->display(initialValue_v12); // 显示初始值
}

voltagepage::~voltagepage()
{
    delete ui;
}

        //lcd_v1显示函数
        void voltagepage::lcd_v1updateValue(uint16_t value)
        {
            ui->lcd_v1->display(value); // 设置新的显示值
        }

        //lcd_v2显示函数
        void voltagepage::lcd_v2updateValue(uint16_t value)
        {
            ui->lcd_v2->display(value); // 设置新的显示值
        }

        //lcd_v3显示函数
        void voltagepage::lcd_v3updateValue(uint16_t value)
        {
            ui->lcd_v3->display(value); // 设置新的显示值
        }

        //lcd_v4显示函数
        void voltagepage::lcd_v4updateValue(uint16_t value)
        {
            ui->lcd_v4->display(value); // 设置新的显示值
        }

        //lcd_v5显示函数
        void voltagepage::lcd_v5updateValue(uint16_t value)
        {
            ui->lcd_v5->display(value); // 设置新的显示值
        }

        //lcd_v6显示函数
        void voltagepage::lcd_v6updateValue(uint16_t value)
        {
            ui->lcd_v6->display(value); // 设置新的显示值
        }

        //lcd_v7显示函数
        void voltagepage::lcd_v7updateValue(uint16_t value)
        {
            ui->lcd_v7->display(value); // 设置新的显示值
        }

        //lcd_v8显示函数
        void voltagepage::lcd_v8updateValue(uint16_t value)
        {
            ui->lcd_v8->display(value); // 设置新的显示值
        }

        //lcd_v9显示函数
        void voltagepage::lcd_v9updateValue(uint16_t value)
        {
            ui->lcd_v9->display(value); // 设置新的显示值
        }

        //lcd_v10显示函数
        void voltagepage::lcd_v10updateValue(uint16_t value)
        {
            ui->lcd_v10->display(value); // 设置新的显示值
        }

        //lcd_v11显示函数
        void voltagepage::lcd_v11updateValue(uint16_t value)
        {
            ui->lcd_v11->display(value); // 设置新的显示值
        }

        //lcd_v12显示函数
        void voltagepage::lcd_v12updateValue(uint16_t value)
        {
            ui->lcd_v12->display(value); // 设置新的显示值
        }
