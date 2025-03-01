#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QChartView>
#include <QValueAxis>
#include <QLineSeries>

/* 光添加头文件QChartView还不够，还需要引入QChart的命名空间 */
//QT_CHARTS_USE_NAMESPACE



class DiagCurve : public QWidget
{
    Q_OBJECT

public:
    explicit DiagCurve(QWidget *parent = 0);
    ~DiagCurve();

    QChartView* getChartView() { return chartView; };
    void addNewCurve(const QString& curveName);
    void fillDataSource(int curveIndex, const QList<QPointF>& data);



public:

    /* 用于模拟生成实时数据的定时器 */
    QTimer* m_timer;

    /* 图表对象 */
    QChart* m_chart;

    QChartView *chartView; // 创建一个 QChartView 对象，并将 QChart 设置给它


    /* 横纵坐标轴对象 */
    QValueAxis *m_axisX, *m_axisY;

    /* 曲线图对象 */
    QLineSeries* m_lineSeries;

    /* 横纵坐标最大显示范围 */
    int AXIS_MAX_X = 30, AXIS_MAX_Y = 30;

    /* 用来记录数据点数 */
    int pointCount = 0;

    QList<QLineSeries*> m_lineSeriesList; // 存储多条曲线的列表
    QList<QList<QPointF>> m_dataSources;  // 存储每条曲线的数据源




public slots:
    void slotBtnClear();
    void slotBtnStartAndStop();
    void slotTimeout();
};

#endif // WIDGET_H
