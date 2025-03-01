#include "myparse.h"

MyParse::MyParse(QObject *parent) : QObject(parent)
{



}

/**
 *函数名:获取can接收数据结构体
 *函数参数:NULL
 *函数作用:NULL
 *函数返回值:NULL
 *备注:NULL
 */
void MyParse::getCanDataSlot(PVCI_CAN_OBJ objs,int count)
{
    int temp;
    uint32_t val_unint32;
    uint16_t val_unint16;
    float val_float;
    //发送给主界面显示

    unsigned int messageID;
    for(int i=0;i<count;i++)
    {
        messageID=objs[i].ID;
        switch (messageID) {
        case 0x521:
        {
            temp =(int32_t)FourBytesToInt(&objs[i].Data[2]);
            val_float=(float)temp;
            //val_float=0;
            emit showcurrent(val_float);
            break;
        }
        case 0x522:
        {
            temp=(uint32_t)((objs[i].Data[2]) | (objs[i].Data[3] << 8) | (objs[i].Data[4] << 16) | objs[i].Data[5]<<24);
            val_float=(float)temp;
            //val_float=45.85;
            emit showtotalvoltage(val_float);
            break;
        }
        case 0x140:
        {
            val_unint16=(uint16_t)((objs[i].Data[0] ) | (objs[i].Data[1] << 8));
            val_float=val_unint16*0.01;
            val_float=72.1;
            emit showsoc(val_float);
            break;
        }
        case 0x131:
        {
            val_unint16=(uint16_t)((objs[i].Data[4] ) | (objs[i].Data[5] << 16));
            val_float=val_unint16*0.1;
            val_float=45;
            emit showsop(val_float);
            break;
        }
        case 0x200:
        {
            val_unint16=(uint16_t)((objs[i].Data[1] ) | (objs[i].Data[2] <<8 ));
            emit showBat1Voltage(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[3] ) | (objs[i].Data[4] << 8));
            emit showBat2Voltage(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[5] ) | (objs[i].Data[6] << 8));
            emit showBat3Voltage(val_unint16);

            break;
        }
        case 0x201:
        {
            val_unint16=(uint16_t)((objs[i].Data[1] ) | (objs[i].Data[2] << 8));
            emit showBat4Voltage(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[3] ) | (objs[i].Data[4] << 8));
            emit showBat5Voltage(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[5] ) | (objs[i].Data[6] << 8));
            emit showBat6Voltage(val_unint16);

            break;
        }
        case 0x202:
        {
            val_unint16=(uint16_t)((objs[i].Data[1] ) | (objs[i].Data[2] << 8));
            emit showBat7Voltage(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[3] ) | (objs[i].Data[4] << 8));
            emit showBat8Voltage(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[5] ) | (objs[i].Data[6] << 8));
            emit showBat9Voltage(val_unint16);
            break;
        }
        case 0x203:
        {
            val_unint16=(uint16_t)((objs[i].Data[1] ) | (objs[i].Data[2] << 8));
            emit showBat10Voltage(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[3] ) | (objs[i].Data[4] << 8));
            emit showBat11Voltage(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[5] ) | (objs[i].Data[6] << 8));
            emit showBat12Voltage(val_unint16);
            break;
        }
        case 0x210:
        {
            val_unint16=(uint16_t)((objs[i].Data[1] ) | (objs[i].Data[2] << 8));
            val_unint16=val_unint16*0.01-128;
            emit showBat1Temp(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[3] ) | (objs[i].Data[4] << 8));
            val_unint16=val_unint16*0.01-128;
            emit showBat2Temp(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[5] ) | (objs[i].Data[6] << 8));
            val_unint16=val_unint16*0.01-128;
            emit showBat3Temp(val_unint16);
            break;
        }
        case 0x211:
        {
            val_unint16=(uint16_t)((objs[i].Data[1] ) | (objs[i].Data[2] << 8));
            val_unint16=val_unint16*0.01-128;
            emit showBat4Temp(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[3] ) | (objs[i].Data[4] << 8));
            val_unint16=val_unint16*0.01-128;
            emit showBat5Temp(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[5] ) | (objs[i].Data[6] << 8));
            val_unint16=val_unint16*0.01-128;
            emit showBat6Temp(val_unint16);

            break;
        }
        case 0x212:
        {
            val_unint16=(uint16_t)((objs[i].Data[1] ) | (objs[i].Data[2] << 8));
            val_unint16=val_unint16*0.01-128;
            emit showBat7Temp(val_unint16);

            val_unint16=(uint16_t)((objs[i].Data[3] ) | (objs[i].Data[4] << 8));
            val_unint16=val_unint16*0.01-128;
            emit showBat8Temp(val_unint16);

//            val_unint16=(uint16_t)((objs[i].Data[5] ) | (objs[i].Data[6] << 16));
//            val_unint16=val_unint16*0.01-128;
//            emit showBat9Temp(val_unint16);ghd

            break;
        }
        default:
            break;
        }
    }
}


int MyParse::FourBytesToInt(unsigned char  vla[])
{
    int32_t result = (vla[0] << 24) | (vla[1] << 16) | (vla[2] << 8) | vla[3];
    // 如果最高位是 1，则这是一个负数，需要将其转换为原码形式
    if (result & 0x80000000) {
        // 取反
        result = ~result;
        // 加 1
        result += 1;
        // 添加负号
        result = -result;
    }
    return result;
}

