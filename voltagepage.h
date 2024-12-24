#ifndef VOLTAGEPAGE_H
#define VOLTAGEPAGE_H

#include <QWidget>

namespace Ui {
class voltagepage;
}

class voltagepage : public QWidget
{
    Q_OBJECT

public:
    explicit voltagepage(QWidget *parent = nullptr);
    ~voltagepage();

private:
    Ui::voltagepage *ui;


public slots:
    //单体电压数据接收
    void lcd_v1updateValue(uint16_t value);
    void lcd_v2updateValue(uint16_t value);
    void lcd_v3updateValue(uint16_t value);
    void lcd_v4updateValue(uint16_t value);
    void lcd_v5updateValue(uint16_t value);
    void lcd_v6updateValue(uint16_t value);
    void lcd_v7updateValue(uint16_t value);
    void lcd_v8updateValue(uint16_t value);
    void lcd_v9updateValue(uint16_t value);
    void lcd_v10updateValue(uint16_t value);
    void lcd_v11updateValue(uint16_t value);
    void lcd_v12updateValue(uint16_t value);
};

#endif // VOLTAGEPAGE_H
