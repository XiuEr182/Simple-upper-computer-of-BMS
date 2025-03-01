#ifndef DIAGPAGE_H
#define DIAGPAGE_H

#include <QObject>
#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>
#include <QDir>
#include <QPointF>
#include "DiagCurve.h"

namespace Ui {
class DiagPage;
}

class DiagPage : public QWidget
{
    Q_OBJECT
public:
    explicit DiagPage(QWidget *parent = nullptr);
    ~DiagPage();

    void importCSV(const QString &filePath, QList<QList<QPointF>> &m_dataSources);

     QList<QList<QPointF>> m_dataSources; // 存储所有曲线的数据
private slots:
    void on_btnStartAndStop_clicked();

    void on_btnClear_clicked();

private:
    Ui::DiagPage *ui;
    DiagCurve *diag_vol = new DiagCurve;
    DiagCurve *diag_vol2 = new DiagCurve;
    DiagCurve *diag_vol3 = new DiagCurve;
    DiagCurve *diag_vol4 = new DiagCurve;

};

#endif // DIAGPAGE_H
