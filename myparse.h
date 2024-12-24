#ifndef MYPARSE_H
#define MYPARSE_H

#include <QObject>
#include "ControlCAN.h"
#include "DrawCurve.h"

class MyParse : public QObject
{
    Q_OBJECT
public:
    explicit MyParse(QObject *parent = 0);
    int FourBytesToInt(unsigned char  arr[]);  
signals:
    void showcurrent(float value);
    void showtotalvoltage(float value);
    void showsoc(float value);
    void showsop(float value);
    void showBat1Voltage(uint16_t value);
    void showBat2Voltage(uint16_t value);
    void showBat3Voltage(uint16_t value);
    void showBat4Voltage(uint16_t value);
    void showBat5Voltage(uint16_t value);
    void showBat6Voltage(uint16_t value);
    void showBat7Voltage(uint16_t value);
    void showBat8Voltage(uint16_t value);
    void showBat9Voltage(uint16_t value);
    void showBat10Voltage(uint16_t value);
    void showBat11Voltage(uint16_t value);
    void showBat12Voltage(uint16_t value);
    void showBat1Temp(uint16_t value);
    void showBat2Temp(uint16_t value);
    void showBat3Temp(uint16_t value);
    void showBat4Temp(uint16_t value);
    void showBat5Temp(uint16_t value);
    void showBat6Temp(uint16_t value);
    void showBat7Temp(uint16_t value);
    void showBat8Temp(uint16_t value);
public slots:
    void getCanDataSlot(PVCI_CAN_OBJ objs,int count);
};

#endif
