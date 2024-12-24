#include "tempage.h"
#include "ui_tempage.h"

tempage::tempage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tempage)
{
    ui->setupUi(this);

    //lcd_t1
    ui->lcd_t1->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_t1->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
//    // 设置 LCD 数字显示的初始值
//    double initialValue_t1= 0.13; // 设置初始值
//    ui->lcd_t1->display(initialValue_t1); // 显示初始值

    //lcd_t2
    ui->lcd_t2->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_t2->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
//    // 设置 LCD 数字显示的初始值
//    double initialValue_t2= 0.13; // 设置初始值
//    ui->lcd_t2->display(initialValue_t2); // 显示初始值

    //lcd_t3
    ui->lcd_t3->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_t3->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
//    // 设置 LCD 数字显示的初始值
//    double initialValue_t3= 0.13; // 设置初始值
//    ui->lcd_t3->display(initialValue_t3); // 显示初始值

    //lcd_t4
    ui->lcd_t4->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_t4->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
//    // 设置 LCD 数字显示的初始值
//    double initialValue_t4= 0.13; // 设置初始值
//    ui->lcd_t4->display(initialValue_t4); // 显示初始值

    //lcd_t5
    ui->lcd_t5->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_t5->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
//    // 设置 LCD 数字显示的初始值
//    double initialValue_t5= 0.13; // 设置初始值
//    ui->lcd_t5->display(initialValue_t5); // 显示初始值

    //lcd_t6
    ui->lcd_t6->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_t6->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_t6= 0.13; // 设置初始值
//    ui->lcd_t6->display(initialValue_t6); // 显示初始值

    //lcd_t7
    ui->lcd_t7->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_t7->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_t7= 0.13; // 设置初始值
//    ui->lcd_t7->display(initialValue_t7); // 显示初始值

    //lcd_t8
    ui->lcd_t8->setSegmentStyle(QLCDNumber::Flat);/* 设置样式 */
    ui->lcd_t8->setSmallDecimalPoint(true); // 设置小数点显示格式为小数点右侧有两个数字
    // 设置 LCD 数字显示的初始值
//    double initialValue_t8= 0.13; // 设置初始值
//    ui->lcd_t8->display(initialValue_t8); // 显示初始值
}

tempage::~tempage()
{
    delete ui;
}

        //lcd_t1显示函数
        void tempage::lcd_t1updateValue(uint16_t value)
        {
            ui->lcd_t1->display(value); // 设置新的显示值
        }

        //lcd_t2显示函数
        void tempage::lcd_t2updateValue(uint16_t value)
        {
            ui->lcd_t2->display(value); // 设置新的显示值
        }

        //lcd_t3显示函数
        void tempage::lcd_t3updateValue(uint16_t value)
        {
            ui->lcd_t3->display(value); // 设置新的显示值
        }

        //lcd_t4显示函数
        void tempage::lcd_t4updateValue(uint16_t value)
        {
            ui->lcd_t4->display(value); // 设置新的显示值
        }

        //lcd_t5显示函数
        void tempage::lcd_t5updateValue(uint16_t value)
        {
            ui->lcd_t5->display(value); // 设置新的显示值
        }

        //lcd_t6显示函数
        void tempage::lcd_t6updateValue(uint16_t value)
        {
            ui->lcd_t6->display(value); // 设置新的显示值
        }

        //lcd_t7显示函数
        void tempage::lcd_t7updateValue(uint16_t value)
        {
            ui->lcd_t7->display(value); // 设置新的显示值
        }

        //lcd_t8显示函数
        void tempage::lcd_t8updateValue(uint16_t value)
        {
            ui->lcd_t8->display(value); // 设置新的显示值
        }
