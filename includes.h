#ifndef INCLUDES_H
#define INCLUDES_H

/*����ͷ�ļ�*/
#include <QThread>
#include <QTimer>
#include <QDebug>
#include <QMetaType>
#include <QMessageBox>
#include <QRegularExpression>
#include <QPalette>
#include <QDateTime>
#include "ControlCAN.h"
#include <memory>
//ͨ�ö���

/*���غ�*/
#define PRINTF_LOCATION() qDebug()<< "ret in "<< __FILE__ << " at " <<__LINE__

#define RET_VALUE_IF_NOT_EAQU(a,b,c)  \
    do {  \
    if(a!=b) \
{        \
    PRINTF_LOCATION();\
    return c; \
}        \
    } while (false)

#define RET_VALUE_IF_EAQU(a,b,c)  \
    do {  \
    if(a==b) \
{        \
    PRINTF_LOCATION();\
    return c; \
}        \
    } while (false)

#define RET_IF_NOT_EAQU(a,b)  \
    do {  \
    if(a!=b) \
{        \
    PRINTF_LOCATION();\
    return; \
}        \
    } while (false)

#define RET_IF_EAQU(a,b)  \
    do {  \
    if(a==b) \
{        \
    PRINTF_LOCATION();\
    return; \
}        \
    } while (false)

/*����*/
#define Z_OCTAL 8
#define Z_DECIMAL 10
#define Z_HEX 16


/*����ֵö������*/
enum RET_VALUE{
    RET_ERR = 0,
    RET_OK
};

/*���Կ���*/
#define OPEN_IF 1
#define CLOSE_IF 0

//��Ŀ��صĶ���

/*can״̬*/
enum CAN_STATUS{
    UNINIT = 0,//δ��ʼ��
    UNCONNECT,//δ����
    OPENDED,//��
    INITED,//��ʼ��
    STARTED//����
};

/*can��������*/
enum CAN_SEND_TYPE{
    CAN_SEND_NORMAL = 0,//����
    CAN_SEND_SIGNAL,//����
    CAN_SEND_SELF,//�Է�����
    CAN_SEND_SELF_SIGNAL//�����Է�����
};


enum CAN_DATA_TYPE{
    CAN_DATA_INFO=0,//����֡
    CAN_DATA_REMOTE//Զ��֡
};

enum CAN_EXTERN_TYPE{
    CAN_FRAM_STANDARD=0,//��׼֡
    CAN_FRAM_EXTERN//��չ֡
};

/*��������*/
enum CAN_TRANSMIT_TYPE{
    CAN_SEND=0,//����
    CAN_RCV//����
};

/*����֡�Ľṹ��*/
struct CAN_SEND_FRAME_STRUCT
{
    CAN_SEND_FRAME_STRUCT()
    {
        packetTyepStr = "";
        idStr = "";
        dataStr = "";
        sourceStr = "";
        aimStr = "";
        timeStr = "";
        meaningStr = "";
        isSendToSelf = false;
        sendCount = 0;
    }
    QString packetTyepStr;
    QString idStr;
    QString dataStr;
    QString sourceStr;
    QString aimStr;
    QString timeStr;
    QString meaningStr;
    bool isSendToSelf;
    int sendCount;
};

/*�Է�����*/
#define SEND_SELF "��"
#define SEND_NORMAL "��"


/*��������*/
enum PACKET_TYPE{
    GATHER_PACKET=1,//�źŲɼ���ɼ�����
    CONTROL_PACKET,//�豸����������Ʊ���
    STATE_PACKET,//�ɼ�ģ��״̬����
    TESTING_PACKET,//���Կ�����״̬��ⱨ��
    INFO_PACKET,//�忨��Ϣ����
    ALL_PACKET//���еı���
};

/*��ַ����*/
enum PACKET_ADDRES{
    CPU_ADDR=1,//���ذ��ַ
    GATHRE_ADDR,//�ɼ����ַ
    BOTTOM_ADDR,//������ư��ַ
    SIDE_ADDR,//������ư��ַ
    TOP_ADDR,//�������ư��ַ
    BROADCAST_ADDR,//�㲥��ַ
    ALL_ADDR//���е�ַ
};


#endif // INCLUDES_H
