#include "DiagCurve.h"

DiagCurve::DiagCurve(QWidget *parent) :
    QWidget(parent)

{
    m_timer = new QTimer(this);
    m_timer->setSingleShot(false);
    QObject::connect(m_timer, SIGNAL(timeout()), this, SLOT(slotTimeout()));

    //
    // 创建横纵坐标轴并设置显示范围
    //

    m_axisX = new QValueAxis();
    m_axisY = new QValueAxis();
    m_axisX->setTitleText("X-label");
    m_axisY->setTitleText("Y-label");
    m_axisX->setMin(0);
    m_axisY->setMax(0);
    m_axisX->setMax(AXIS_MAX_X);
    m_axisY->setMax(AXIS_MAX_Y);

    //m_lineSeries = new QLineSeries();                             // 创建曲线绘制对象
    //m_lineSeries->setPointsVisible(true);                         // 设置数据点可见
   // m_lineSeries->setName("随机数曲线");                            // 图例名称

    m_chart = new QChart();                                        // 创建图表对象
    m_chart->addAxis(m_axisX, Qt::AlignLeft);                      // 将X轴添加到图表上
    m_chart->addAxis(m_axisY, Qt::AlignBottom);                    // 将Y轴添加到图表上
    //m_chart->addSeries(m_lineSeries);                              // 将曲线对象添加到图表上
    m_chart->setAnimationOptions(QChart::SeriesAnimations);        // 动画：能使曲线绘制显示的更平滑，过渡效果更好看


    //m_lineSeries->attachAxis(m_axisX);                             // 曲线对象关联上X轴，此步骤必须在m_chart->addSeries之后
   // m_lineSeries->attachAxis(m_axisY);                             // 曲线对象关联上Y轴，此步骤必须在m_chart->addSeries之后

    chartView = new QChartView(m_chart);
    chartView->setRenderHint(QPainter::Antialiasing);
   }

DiagCurve::~DiagCurve()
{

}

void DiagCurve::addNewCurve(const QString& curveName)
{
    // 创建新的曲线
    QLineSeries* series = new QLineSeries();
    series->setPointsVisible(true);

    // 设置曲线名称（使用传入的参数）
    series->setName(curveName);

    // 将曲线添加到曲线列表中
    m_lineSeriesList.append(series);

    // 将曲线添加到图表中
    m_chart->addSeries(series);

    // 将曲线关联到 X 轴和 Y 轴
    series->attachAxis(m_axisX);
    series->attachAxis(m_axisY);

    // 初始化数据源
    QList<QPointF> dataSource;
    m_dataSources.append(dataSource); // 将数据源添加到列表中
}

void DiagCurve::fillDataSource(int curveIndex, const QList<QPointF>& data)
{
    if (curveIndex >= 0 && curveIndex < m_dataSources.size()) {
        m_dataSources[curveIndex] = data; // 填充特定曲线的数据源
    }
}

void DiagCurve::slotTimeout()
{
    if (pointCount > AXIS_MAX_X)
    {
        for (QLineSeries* series : m_lineSeriesList) {
            series->remove(0); // 移除每条曲线的第一个数据点
        }

        // 获取 X 轴并设置范围
        QList<QAbstractAxis*> xAxes = m_chart->axes(Qt::Horizontal);
        if (!xAxes.isEmpty()) {
            QAbstractAxis* xAxis = xAxes.first(); // 获取第一个 X 轴
            xAxis->setMin(pointCount - AXIS_MAX_X);
            xAxis->setMax(pointCount);
        }
    }

    // 为每条曲线生成特定的数据点
    for (int i = 0; i < m_lineSeriesList.size(); ++i) {
        QLineSeries* series = m_lineSeriesList[i];
        QList<QPointF>& dataSource = m_dataSources[i];

        // 从数据源中获取数据（这里假设数据源已经填充了数据）
        if (pointCount < dataSource.size()) {
            QPointF point = dataSource[pointCount];
            series->append(point);
        }
    }

    pointCount++;
}




void DiagCurve::slotBtnStartAndStop()
{
    if(m_timer->isActive())
    {
        m_timer->stop();

    }else
    {
        pointCount = 0;
        m_timer->start(200);

    }
}

void DiagCurve::slotBtnClear()
{
    // 清除所有曲线的数据点
    for (QLineSeries* series : m_lineSeriesList) {
        series->clear();
    }

    // 重置X轴的范围
    m_chart->axisX()->setMin(0);
    m_chart->axisX()->setMax(AXIS_MAX_X);

    // 重置数据点计数器
    pointCount = 0;
}

