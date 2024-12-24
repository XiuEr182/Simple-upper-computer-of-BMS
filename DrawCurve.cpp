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

        chart->setTitle("��ѹ����");
        // ���һ������
        chart->addSeries(splineSeries);
        // ����Y����ʾ��ʽ
        axisY->setLabelFormat("%.2f");
        // ����Y�����
        axisY->setTitleText("��ѹ��V��");
        // ����Y�᷶Χ
        axisY->setRange(0, maxY);
        // ���� Y ��̶ȼ��Ϊ 10
        int yTickCount = static_cast<int>(maxY / 10) + 1 ; // ����̶�����
        axisY->setTickCount(yTickCount);
        // Y�����λ�ã����������᷽��
        chart->addAxis(axisY, Qt::AlignLeft);
        // ��splineSeries����y����
        splineSeries->attachAxis(axisY);
        // ����x����ʾ��ʽ
        axisX->setLabelFormat("%.2f");
        axisX->setLabelsVisible(false);
        // ����X�����
        axisX->setTitleText("ʱ�䣨�룩 ");
        axisX->setTickCount(11); // ���ÿ̶�����
        axisX->setRange(0, 1.0); // ���÷�Χ
        // X�����λ��
        chart->addAxis(axisX, Qt::AlignBottom);
        // ��splineSeries������X����
        splineSeries->attachAxis(axisX);
        // ��ͼ�������������ͼ����ͼ��
        chartView->setChart(chart);
        // ���ÿ����
        chartView->setRenderHint(QPainter::Antialiasing);
        // ����ͼ����ͼΪ���Ĳ���
        setCentralWidget(chartView);
        // ��ͼ����ͼ��ӵ� container_voltageinformation �Ĳ�����
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
        Cchart->setTitle("��������");
        Cchart->addSeries(CsplineSeries);
        axisCY->setLabelFormat("%.2f");
        axisCY->setTitleText("������A��");
        axisCY->setRange(-2, maxCY);
        axisCY->setTickCount(static_cast<int>(maxCY / 0.5) + 1);
        Cchart->addAxis(axisCY, Qt::AlignLeft);
        CsplineSeries->attachAxis(axisCY);
        axisCX->setLabelFormat("%.2f");
        axisCX->setLabelsVisible(false);
        axisCX->setTitleText("ʱ�䣨�룩");
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
    // ��������ӵ�data��
    data.append(value);
    // ���������ݵĸ����������ֵ��ʱ�򣬰ѵ�һ������ɾ��
    while (data.size() > maxSize)
    {
        // �Ƴ�data�еĵ�һ������
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

////�ܵ�ѹ���ݱ��溯��
//void DrawCurve::saveVoltageData(double value) {
//    if (voltageStream)
//    {
//        *voltageStream << getCurrentTime() << "," << value << "\n";
//    }
//}

////�ܵ������ݱ��溯��
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
    // ����X������֮��ļ��
    double xSpace = maxX / (maxSize - 1);
    // ��ӵ㣬xSpace * i��ʾ��i�����x��λ��
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
