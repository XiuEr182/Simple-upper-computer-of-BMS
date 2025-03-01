#ifndef CURVE_H
#define CURVE_H

#include <QObject>
#include <QThread>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QtCharts>
#include <QString>
#include <QCoreApplication>
#include <QMainWindow>
#include <QTimer>



class DrawCurve : public QMainWindow
{
    Q_OBJECT
private:

    QTimer *timer;
    int maxSize;
    double maxX;
    double maxY;

    QValueAxis *axisY;
    QValueAxis *axisX;

    QList<double> data;
    QSplineSeries *splineSeries;
    QChart *chart;
    QChartView *chartView;

    QSplineSeries *CsplineSeries;
    QChart *Cchart;
    QChartView *CchartView;
    QValueAxis *axisCX;
    QValueAxis *axisCY;
    int maxCSize;
    double maxCX;
    double maxCY;
    QList<double> Cdata;

//    QFile *voltageFile;
//    QTextStream *voltageStream;
//    QFile *currentFile;
//    QTextStream *currentStream;

public:
    DrawCurve();
    ~DrawCurve();
//    void saveVoltageData(double value);
//    void saveCurrentData(double value);
//    QString getProjectPath();
//    QString getCurrentTime();
    void drawcurrentcurve(float value);
    void drawvoltagecurve(float value);
    void UpdateVolCurve(void);
    void UpdateCurCurve(void);
};

#endif // CURVE_H
