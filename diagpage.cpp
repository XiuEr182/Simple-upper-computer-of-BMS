#include "diagpage.h"
#include "ui_DiagPage.h"
DiagPage::DiagPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DiagPage)
{
    //导入CSV数据
    QString filePath = QDir(QCoreApplication::applicationDirPath()).filePath("test_data.csv");// 获取CSV文件路径（假设文件在程序源文件目录下）
    importCSV(filePath, m_dataSources);// 导入CSV文件

    for (int i = 0; i < m_dataSources.size(); ++i) {
        qDebug() << "曲线" << i + 1 << ":";
        const QList<QPointF> &curve = m_dataSources[i];
        for (const QPointF &point : curve) {
            qDebug() << "(" << point.x() << "," << point.y() << ")";
        }
    }

    ui->setupUi(this);
    QChartView *chartView = diag_vol->getChartView();
    chartView->setParent(ui->chartview1); // 假设 UI 里有一个占位 QWidget
    chartView->resize(800 ,500);
    chartView->show();
    diag_vol->m_axisX->setMin(4.05);
    diag_vol->m_axisX->setMax(4.2);
    diag_vol->m_axisY->setTitleText("时间（s）");
    diag_vol->m_axisX->setTitleText("电压（V）");
    QFont titleFont;
    titleFont.setPointSize(10); // 字体大小
    titleFont.setBold(true);   // 加粗
    diag_vol->m_chart->setTitleFont(titleFont);
    diag_vol->m_chart->setTitle("原始电压曲线");
    diag_vol->addNewCurve("V1");
    diag_vol->fillDataSource(0, m_dataSources[1]);
    diag_vol->addNewCurve("V2");
    diag_vol->fillDataSource(1, m_dataSources[2]);
    diag_vol->addNewCurve("V3");
    diag_vol->fillDataSource(2, m_dataSources[3]);
    diag_vol->addNewCurve("V4");
    diag_vol->fillDataSource(3, m_dataSources[4]);
    diag_vol->addNewCurve("V5");
    diag_vol->fillDataSource(4, m_dataSources[5]);
    diag_vol->addNewCurve("V6");
    diag_vol->fillDataSource(5, m_dataSources[6]);
    diag_vol->addNewCurve("V7");
    diag_vol->fillDataSource(6, m_dataSources[7]);
    diag_vol->addNewCurve("V8");
    diag_vol->fillDataSource(7, m_dataSources[8]);
    diag_vol->addNewCurve("V9");
    diag_vol->fillDataSource(8, m_dataSources[9]);
    diag_vol->addNewCurve("V10");
    diag_vol->fillDataSource(9, m_dataSources[10]);
    diag_vol->addNewCurve("V11");
    diag_vol->fillDataSource(10, m_dataSources[11]);
    diag_vol->addNewCurve("V12");
    diag_vol->fillDataSource(11, m_dataSources[12]);


    QChartView *chartView2 = diag_vol2->getChartView();
    chartView2->setParent(ui->chartview2); // 假设 UI 里有一个占位 QWidget
    chartView2->resize(800,500);
    chartView2->show();

    diag_vol2->m_axisX->setMin(4.05);
    diag_vol2->m_axisX->setMax(4.2);
    diag_vol2->m_axisY->setTitleText("时间（s）");
    diag_vol2->m_axisX->setTitleText("电压（V）");
    diag_vol2->m_chart->setTitleFont(titleFont);
    diag_vol2->m_chart->setTitle("电压曲线低频分量");
    diag_vol2->addNewCurve("V1");
    diag_vol2->fillDataSource(0, m_dataSources[13]);
    diag_vol2->addNewCurve("V2");
    diag_vol2->fillDataSource(1, m_dataSources[14]);
    diag_vol2->addNewCurve("V3");
    diag_vol2->fillDataSource(2, m_dataSources[15]);
    diag_vol2->addNewCurve("V4");
    diag_vol2->fillDataSource(3, m_dataSources[16]);
    diag_vol2->addNewCurve("V5");
    diag_vol2->fillDataSource(4, m_dataSources[17]);
    diag_vol2->addNewCurve("V6");
    diag_vol2->fillDataSource(5, m_dataSources[18]);
    diag_vol2->addNewCurve("V7");
    diag_vol2->fillDataSource(6, m_dataSources[19]);
    diag_vol2->addNewCurve("V8");
    diag_vol2->fillDataSource(7, m_dataSources[20]);
    diag_vol2->addNewCurve("V9");
    diag_vol2->fillDataSource(8, m_dataSources[21]);
    diag_vol2->addNewCurve("V10");
    diag_vol2->fillDataSource(9, m_dataSources[22]);
    diag_vol2->addNewCurve("V11");
    diag_vol2->fillDataSource(10, m_dataSources[23]);
    diag_vol2->addNewCurve("V12");
    diag_vol2->fillDataSource(11, m_dataSources[24]);


    QChartView *chartView3 = diag_vol3->getChartView();
    chartView3->setParent(ui->chartview3); // 假设 UI 里有一个占位 QWidget
    chartView3->resize(800,500);
    chartView3->show();

    QFont legendFont = diag_vol3->m_chart->legend()->font();
    legendFont.setPointSize(7);
    diag_vol3->m_chart->legend()->setFont(legendFont);

    diag_vol3->m_axisX->setMin(0);
    diag_vol3->m_axisX->setMax(1.4);
    diag_vol3->m_axisY->setTitleText("时间（s）");
    diag_vol3->m_axisX->setTitleText("相似性程度");

    diag_vol3->m_chart->setTitleFont(titleFont);
    diag_vol3->m_chart->setTitle("电池间相似性计算结果");
    diag_vol3->addNewCurve("M(V1,V2)");
    diag_vol3->fillDataSource(0, m_dataSources[25]);
    diag_vol3->addNewCurve("M(V2,V3)");
    diag_vol3->fillDataSource(1, m_dataSources[26]);
    diag_vol3->addNewCurve("M(V3,V4)");
    diag_vol3->fillDataSource(2, m_dataSources[27]);
    diag_vol3->addNewCurve("M(V4,V5)");
    diag_vol3->fillDataSource(3, m_dataSources[28]);
    diag_vol3->addNewCurve("M(V5,V6)");
    diag_vol3->fillDataSource(4, m_dataSources[29]);
    diag_vol3->addNewCurve("M(V6,V7)");
    diag_vol3->fillDataSource(5, m_dataSources[30]);
    diag_vol3->addNewCurve("M(V7,V8)");
    diag_vol3->fillDataSource(6, m_dataSources[31]);
    diag_vol3->addNewCurve("M(V8,V9)");
    diag_vol3->fillDataSource(7, m_dataSources[32]);
    diag_vol3->addNewCurve("M(V9,V10)");
    diag_vol3->fillDataSource(8, m_dataSources[33]);
    diag_vol3->addNewCurve("M(V10,V11)");
    diag_vol3->fillDataSource(9, m_dataSources[34]);
    diag_vol3->addNewCurve("M(V11,V12)");
    diag_vol3->fillDataSource(10, m_dataSources[35]);

    QChartView *chartView4 = diag_vol4->getChartView();
    chartView4->setParent(ui->chartview4); // 假设 UI 里有一个占位 QWidget
    chartView4->resize(800,500);
    chartView4->show();
    diag_vol4->m_chart->legend()->setFont(legendFont);
    diag_vol4->m_axisX->setMin(-1);
    diag_vol4->m_axisX->setMax(1);
    diag_vol4->m_axisY->setTitleText("时间（s）");
    diag_vol4->m_axisX->setTitleText("极性");

    diag_vol4->m_chart->setTitleFont(titleFont);
    diag_vol4->m_chart->setTitle("电池间极性计算结果");
    diag_vol4->addNewCurve("P(V1,V2)");
    diag_vol4->fillDataSource(0, m_dataSources[36]);
    diag_vol4->addNewCurve("P(V2,V3)");
    diag_vol4->fillDataSource(1, m_dataSources[37]);
    diag_vol4->addNewCurve("P(V3,V4)");
    diag_vol4->fillDataSource(2, m_dataSources[38]);
    diag_vol4->addNewCurve("P(V4,V5)");
    diag_vol4->fillDataSource(3, m_dataSources[39]);
    diag_vol4->addNewCurve("P(V5,V6)");
    diag_vol4->fillDataSource(4, m_dataSources[40]);
    diag_vol4->addNewCurve("P(V6,V7)");
    diag_vol4->fillDataSource(5, m_dataSources[41]);
    diag_vol4->addNewCurve("P(V7,V8)");
    diag_vol4->fillDataSource(6, m_dataSources[42]);
    diag_vol4->addNewCurve("P(V8,V9)");
    diag_vol4->fillDataSource(7, m_dataSources[43]);
    diag_vol4->addNewCurve("P(V9,V10)");
    diag_vol4->fillDataSource(8, m_dataSources[44]);
    diag_vol4->addNewCurve("P(V10,V11)");
    diag_vol4->fillDataSource(9, m_dataSources[45]);
    diag_vol4->addNewCurve("P(V11,V12)");
    diag_vol4->fillDataSource(10, m_dataSources[46]);

}

DiagPage::~DiagPage()
{
    delete ui;
}

// 导入CSV文件，将每一列存储为一条曲线
void DiagPage::importCSV(const QString &filePath, QList<QList<QPointF>> &m_dataSources) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "无法打开文件:" << filePath;
        return;
    }

    QTextStream in(&file);
    int row = 0; // 行号，用作时间点

    // 初始化数据结构
    m_dataSources.clear();

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed(); // 读取一行并去除空白字符
        if (line.isEmpty()) continue; // 跳过空行

        QStringList fields = line.split(','); // 按逗号分隔每一列

        // 如果是第一行，初始化曲线数量
        if (row == 0) {
            for (int col = 0; col < fields.size(); ++col) {
                m_dataSources.append(QList<QPointF>()); // 为每一列初始化一条曲线
            }
        }

        // 将每一列的数据添加到对应的曲线中
        for (int col = 0; col < fields.size(); ++col) {
            bool ok;
            qreal value = fields[col].toDouble(&ok); // 将字符串转换为浮点数
            if (ok) {
                m_dataSources[col].append(QPointF(row, value)); // 行号作为x，列值作为y
            } else {
                qWarning() << "无效的数据格式:" << fields[col] << "在行" << row << "列" << col;
            }
        }

        ++row; // 增加行号
    }

    file.close();
}

void DiagPage::on_btnStartAndStop_clicked()
{
    diag_vol->slotBtnStartAndStop();
    diag_vol2->slotBtnStartAndStop();
    diag_vol3->slotBtnStartAndStop();
    diag_vol4->slotBtnStartAndStop();

}


void DiagPage::on_btnClear_clicked()
{
    diag_vol->slotBtnClear();
    diag_vol2->slotBtnClear();
    diag_vol3->slotBtnClear();
    diag_vol4->slotBtnClear();

}

