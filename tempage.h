#ifndef TEMPAGE_H
#define TEMPAGE_H

#include <QWidget>

namespace Ui {
class tempage;
}

class tempage : public QWidget
{
    Q_OBJECT

public:
    explicit tempage(QWidget *parent = nullptr);
    ~tempage();

private:
    Ui::tempage *ui;


public slots:
    //温度数据接收
    void lcd_t1updateValue(uint16_t value);
    void lcd_t2updateValue(uint16_t value);
    void lcd_t3updateValue(uint16_t value);
    void lcd_t4updateValue(uint16_t value);
    void lcd_t5updateValue(uint16_t value);
    void lcd_t6updateValue(uint16_t value);
    void lcd_t7updateValue(uint16_t value);
    void lcd_t8updateValue(uint16_t value);


};

#endif // TEMPAGE_H
