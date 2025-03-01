#include <QMainWindow>
#include "DrawCurve.h"
#include "mainwindow.h"



DrawCurve::DrawCurve()
{
        maxSize =101;

        maxX = 1.0;
        maxY = 60.0;

        splineSeries = new QSplineSeries();

        chart = new QChart();

        chartView = new QChartView();
        chartView->setFixedSize(490, 320);
        setCentralWidget(chartView);

        axisX = new QValueAxis();
        axisY = new QValueAxis();

        chart->legend()->hide();

        chart->setTitle("电压曲线");
        // 添加一条曲线
        chart->addSeries(splineSeries);
        // 设置Y轴显示格式
        axisY->setLabelFormat("%.2f");
        // 设置Y轴标题
        axisY->setTitleText("电压（V）");
        // 设置Y轴范围
        axisY->setRange(0, maxY);
        // 设置 Y 轴刻度间隔为 10
        int yTickCount = static_cast<int>(maxY / 10) + 1 ; // 计算刻度数量
        axisY->setTickCount(yTickCount);
        // Y轴标题位置（设置坐标轴方向）
        chart->addAxis(axisY, Qt::AlignLeft);
        // 将splineSeries附于y轴上
        splineSeries->attachAxis(axisY);
        // 设置x轴显示格式
        axisX->setLabelFormat("%.2f");
        axisX->setLabelsVisible(false);
        // 设置X轴标题
        axisX->setTitleText("时间（秒） ");
        axisX->setTickCount(11); // 设置刻度数量
        axisX->setRange(0, 1.0); // 设置范围
        // X轴标题位置
        chart->addAxis(axisX, Qt::AlignBottom);
        // 将splineSeries附加于X轴上
        splineSeries->attachAxis(axisX);
        // 将图表的内容设置在图表视图上
        chartView->setChart(chart);
        // 设置抗锯齿
        chartView->setRenderHint(QPainter::Antialiasing);
        // 设置图表视图为中心部件
        setCentralWidget(chartView);
        // 将图表视图添加到 container_voltageinformation 的布局中
        MainWindow::groupBoxLayout4->addWidget(chartView);

        chartView->setAlignment(Qt::AlignCenter);

        maxCSize = 101;
        maxCX = 1.0;
        maxCY = 2.0;
        CsplineSeries = new QSplineSeries();
        Cchart = new QChart();
        CchartView = new QChartView(Cchart);
        axisCX = new QValueAxis();
        axisCY = new QValueAxis();
        Cchart->legend()->hide();
        Cchart->setTitle("电流曲线");
        Cchart->addSeries(CsplineSeries);
        axisCY->setLabelFormat("%.2f");
        axisCY->setTitleText("电流（A）");
        axisCY->setRange(-2, maxCY);
        axisCY->setTickCount(static_cast<int>(maxCY / 0.5) + 1);
        Cchart->addAxis(axisCY, Qt::AlignLeft);
        CsplineSeries->attachAxis(axisCY);
        axisCX->setLabelFormat("%.2f");
        axisCX->setLabelsVisible(false);
        axisCX->setTitleText("时间（秒）");
        axisCX->setTickCount(11);
        axisCX->setRange(0, 1.0);
        Cchart->addAxis(axisCX, Qt::AlignBottom);
        CsplineSeries->attachAxis(axisCX);
        CchartView->setRenderHint(QPainter::Antialiasing);
        MainWindow::groupBoxLayout5->addWidget(CchartView);
        CchartView->setAlignment(Qt::AlignCenter);

        //voltage conserve
        //QString projectPath = getProjectPath();
        //voltageFile = new QFile(projectPath + "/voltage_data.csv");
//        if (voltageFile->open(QIODevice::WriteOnly | QIODevice::Append))
//        {
//            voltageStream = new QTextStream(voltageFile);

//            *voltageStream << "Time,Voltage\n";
//        }

        //current conserve
//        currentFile = new QFile(projectPath + "/current_data.csv");
//        if (currentFile->open(QIODevice::WriteOnly | QIODevice::Append))
//        {
//              currentStream = new QTextStream(currentFile);

//              *currentStream << "Time,Current\n";
//         }
        timer = new QTimer(this);
        connect(timer,&QTimer::timeout,this,&DrawCurve::UpdateCurCurve);
        connect(timer,&QTimer::timeout,this,&DrawCurve::UpdateVolCurve);
        timer->start(100); //
}

DrawCurve::~DrawCurve()
{

}


void DrawCurve::drawvoltagecurve(float value)
{
    // 将数据添加到data中
    data.append(value);
    // 当储存数据的个数大于最大值的时候，把第一个数据删除
    while (data.size() > maxSize)
    {
        // 移除data中的第一个数据
        data.removeFirst();
    }
}

void DrawCurve::drawcurrentcurve(float value)
{
    Cdata.append(value);
    while (Cdata.size() > maxCSize)
    {
        Cdata.removeFirst();
    }
}

////总电压数据保存函数
//void DrawCurve::saveVoltageData(double value) {
//    if (voltageStream)
//    {
//        *voltageStream << getCurrentTime() << "," << value << "\n";
//    }
//}

////总电流数据保存函数
//void DrawCurve::saveCurrentData(double value) {
//    if (currentStream)
//    {
//        *currentStream << getCurrentTime() << "," << value << "\n";
//    }
//}

//QString DrawCurve::getProjectPath() {
//    return QCoreApplication::applicationDirPath();
//}
//QString DrawCurve::getCurrentTime() {
//    return QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
//}
void DrawCurve::UpdateVolCurve(void)
{
    splineSeries->clear();
    // 计算X轴点与点之间的间距
    double xSpace = maxX / (maxSize - 1);
    // 添加点，xSpace * i表示第i个点的x轴位置
    for (int i = 0; i < data.size(); ++i)
    {
        double xValue = static_cast<double>(i) / (maxSize - 1);
        splineSeries->append(xValue, data.at(i));
    }
}

void DrawCurve::UpdateCurCurve(void)
{
    CsplineSeries->clear();
    for (int i = 0; i < Cdata.size(); ++i)
    {
        double xCValue = static_cast<double>(i) / (maxCSize - 1);
        CsplineSeries->append(xCValue, Cdata.at(i));
    }
}
