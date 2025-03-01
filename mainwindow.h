#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtCharts>
#include <QSplineSeries>
#include <QScatterSeries>
#include <QDebug>
#include <QValueAxis>
#include <QVBoxLayout>
#include <QLabel>
#include "batt.h"
#include "ui_mainwindow.h"
#include "voltagepage.h"
#include "tempage.h"
#include "includes.h"
#include "canmanager.h"
#include "mycanthread.h"
#include "myparse.h"
#include "DrawCurve.h"
#include "diagpage.h"


#pragma execution_character_set("utf-8")

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    DrawCurve *curve_t;
    static QVBoxLayout *groupBoxLayout4;
    static QVBoxLayout *groupBoxLayout5;
private:
    Ui::MainWindow *ui;
    batt *batteryWidget;
    voltagepage *configWindow = new voltagepage;
    tempage *configWindow2 = new tempage;
    DiagPage *DiagWindow = new DiagPage;
    void init(void);
   //CAN1对象相关
    MyParse MyPase;

private slots:
    void on_ButtonOpenCAN_clicked();
    void on_ButtonCloseCAN_clicked();
    void receivedvolData(float value);// voltage DrawCurve
    void receivedcurData(float value);//电流曲线数据接收
    void TVupdateValue(float value);//总电压数据接收
    void TAupdateValue(float value);//总电流数据接收
    void SOPupdateValue(float value);//SOP数据接收
    void on_SingleVoltageButton_clicked();
    void on_SingleTemButton_clicked();
    void  on_SingleDiagPage_clicked();
};

#endif // MAINWINDOW_H
