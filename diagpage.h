#ifndef DIAGPAGE_H
#define DIAGPAGE_H

#include <QObject>
#include <QWidget>

class DiagPage : public QWidget
{
    Q_OBJECT
public:
    explicit DiagPage(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // DIAGPAGE_H