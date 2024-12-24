#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGroupBox>
#include <QGroupBox>

#pragma execution_character_set("utf-8")


QVBoxLayout *MainWindow::groupBoxLayout4 = nullptr;
QVBoxLayout *MainWindow::groupBoxLayout5 = nullptr;
//QString MainWindow::getProjectPath() {
//    return QCoreApplication::applicationDirPath();
//}
//QString MainWindow::getCurrentTime() {
//    return QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
//}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setFixedSize(1000, 600); // 设置宽度为 800 像素，高度为 600 像素
    //ui->setupUi(this);

        /* creat QgroupBox container */
        QGroupBox *container_overviewinformation = new QGroupBox("Information Overview", this);
        container_overviewinformation->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        container_overviewinformation->setFixedSize(950, 220);
        container_overviewinformation->move(20, 20);

        QGroupBox *container_voltageinformation = new QGroupBox("Voltage Curve", this);
        container_voltageinformation->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        container_voltageinformation->move(15, 250);
        container_voltageinformation->setFixedSize(470, 345); // 设置容器大小
        groupBoxLayout4= new QVBoxLayout(container_voltageinformation);

        QGroupBox* container_currentinformation = new QGroupBox("Current Curve", this);
        container_currentinformation->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        container_currentinformation->setFixedSize(470, 345); // 设置容器大小
        container_currentinformation->move(510, 250);
        groupBoxLayout5 = new QVBoxLayout(container_currentinformation);

        QGroupBox *container_socinformation = new QGroupBox("SOC", this);
        container_socinformation->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        container_socinformation->setFixedSize(400, 180);
        container_socinformation->move(500, 20);

        QVBoxLayout *container_socinformationLayout = new QVBoxLayout(container_socinformation);
        /* ***************************************************************************** */

        /* add battery element*/
        batteryWidget = new batt(this);
        batteryWidget->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        batteryWidget->setFixedSize(200, 100); // 设置电池部件的固定大小
        batteryWidget->setAlarmValue(20);

        QHBoxLayout *horizontalLayout = new QHBoxLayout();
        horizontalLayout->addStretch();
        horizontalLayout->addWidget(batteryWidget);
        horizontalLayout->addStretch();
        container_socinformationLayout->addLayout(horizontalLayout);
        /* ***************************************************************************** */
        setFixedSize(1000, 600); // 设置宽度为 800 像素，高度为 600 像素
        ui->setupUi(this);

        //总电压、电流、SOP样式
        //总电压LCD显示
        ui->totall_V->setSegmentStyle(QLCDNumber::Flat);
        ui->totall_V->setSmallDecimalPoint(true);
        //total current dispaly
        ui->totall_A->setSegmentStyle(QLCDNumber::Flat);
        ui->totall_A->setSmallDecimalPoint(true);
        //SOP LCD显示
        ui->SOP->setSegmentStyle(QLCDNumber::Flat);
        ui->SOP->setSmallDecimalPoint(true);

        //voltage and current curve display
        curve_t = new DrawCurve;
        this->init();
}


//动态电压曲线显示
void MainWindow::receivedvolData(float value)
{
    curve_t->drawvoltagecurve(value);
}
//动态电流数据显示
void MainWindow::receivedcurData(float value)
{
    curve_t->drawcurrentcurve(value);
}

// 总电压显示函数
void MainWindow::TVupdateValue(float value_0)
{
    double value=(double)value_0;
    ui->totall_V->display(value); // 设置新的显示值
}
//总电流显示函数
void MainWindow::TAupdateValue(float value_0)
{
    double value=(double)value_0;
    ui->totall_A->display(value); // 设置新的显示值
}

//SOP显示函数
void MainWindow::SOPupdateValue(float value)
{
    value=458;
    ui->SOP->display(value); // 设置新的显示值
}

//单体电压显示按钮
void MainWindow::on_SingleVoltageButton_clicked()
{
     //通过show方式显示
        configWindow->show();
}

//温度显示按钮
void MainWindow::on_SingleTemButton_clicked()
{
    configWindow2->show();
}

MainWindow::~MainWindow()
{
    delete ui;
//    if (voltageFile) {
//            voltageFile->close();
//            delete voltageStream;
//            delete voltageFile;
//        }
//        if (currentFile) {
//            currentFile->close();
//            delete currentStream;
//            delete currentFile;
//        }
}

void MainWindow::init(void)
{
    qRegisterMetaType<VCI_CAN_OBJ>("VCI_CAN_OBJ");//注册can结构体
    qRegisterMetaType<PVCI_CAN_OBJ>("PVCI_CAN_OBJ");//注册can结构体

    this->setAttribute(Qt::WA_DeleteOnClose);// 告诉Qt在窗口关闭时自动删除这个窗口对象

    connect(&CanManager::GetInstance()->can1,SIGNAL(getCanDataSignal(PVCI_CAN_OBJ,int)),&MyPase,SLOT(getCanDataSlot(PVCI_CAN_OBJ,int)));
    connect(&MyPase,SIGNAL(showBat1Voltage(uint16_t)),configWindow,SLOT(lcd_v1updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat2Voltage(uint16_t)),configWindow,SLOT(lcd_v2updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat3Voltage(uint16_t)),configWindow,SLOT(lcd_v3updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat4Voltage(uint16_t)),configWindow,SLOT(lcd_v4updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat5Voltage(uint16_t)),configWindow,SLOT(lcd_v5updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat6Voltage(uint16_t)),configWindow,SLOT(lcd_v6updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat7Voltage(uint16_t)),configWindow,SLOT(lcd_v7updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat8Voltage(uint16_t)),configWindow,SLOT(lcd_v8updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat9Voltage(uint16_t)),configWindow,SLOT(lcd_v9updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat10Voltage(uint16_t)),configWindow,SLOT(lcd_v10updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat11Voltage(uint16_t)),configWindow,SLOT(lcd_v11updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat12Voltage(uint16_t)),configWindow,SLOT(lcd_v12updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat1Temp(uint16_t)),configWindow2,SLOT(lcd_t1updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat2Temp(uint16_t)),configWindow2,SLOT(lcd_t2updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat3Temp(uint16_t)),configWindow2,SLOT(lcd_t3updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat4Temp(uint16_t)),configWindow2,SLOT(lcd_t4updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat5Temp(uint16_t)),configWindow2,SLOT(lcd_t5updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat6Temp(uint16_t)),configWindow2,SLOT(lcd_t6updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat7Temp(uint16_t)),configWindow2,SLOT(lcd_t7updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showBat8Temp(uint16_t)),configWindow2,SLOT(lcd_t8updateValue(uint16_t)));
    connect(&MyPase,SIGNAL(showsoc(float)),batteryWidget,SLOT(setValue(float)));
    connect(&MyPase,SIGNAL(showcurrent(float)),this,SLOT(TAupdateValue(float)));
    connect(&MyPase,SIGNAL(showcurrent(float)),this,SLOT(receivedcurData(float)));

    connect(&MyPase,SIGNAL(showtotalvoltage(float)),this,SLOT(TVupdateValue(float)));
    connect(&MyPase,SIGNAL(showtotalvoltage(float)),this,SLOT(receivedvolData(float)));
    connect(&MyPase,SIGNAL(showsop(float)),this,SLOT(SOPupdateValue(float)));
    //connect(this,SIGNAL(Draw_voltage_value(float)),curve_t,SLOT(receive_voltage(float)));
    //connect(this,SIGNAL(Draw_current_value(float)),curve_t,SLOT(receive_current(float)));

}

void MainWindow::on_ButtonOpenCAN_clicked()
{
    int deviceTye,device,chanel;

        deviceTye = 4;//USBCAN2
        device = 0;
        chanel = 0;
    if(RET_ERR == CanManager::GetInstance()->openCan(deviceTye,device,chanel))
    {
        QMessageBox::warning(this,"失败","打开can失败");
        return;
    }

    QPalette palette;palette.setColor(QPalette::WindowText,Qt::red);
    ui->ConnectState->setPalette(palette);
    ui->ConnectState->setText("OK");
}

void MainWindow::on_ButtonCloseCAN_clicked()
{
    int deviceTye,device;

        deviceTye = 4;

        device = 0;

    if(RET_ERR == CanManager::GetInstance()->closeCan(deviceTye,device))
    {
        QMessageBox::warning(this,"失败","关闭can失败");
    }
    QPalette palette;palette.setColor(QPalette::WindowText,Qt::black);
    ui->ConnectState->setPalette(palette);
    ui->ConnectState->setText("NOK");
}




