#include "canmanager.h"

CanManager::CanManager()
{

}

/**
 *������:���ص��ж���
 *��������:NULL
 *��������:NULL
 *��������ֵ:NULL
 *��ע:NULL
 */
CanManager *CanManager::GetInstance()
{
    static CanManager cm;
    return &cm;
}

/**
 *������:��CAN
 *��������:NULL
 *��������:NULL
 *��������ֵ:NULL
 *��ע:NULL
 */
int CanManager::openCan(int deviceTye,int device,int chanel)
{
    int ret = RET_OK;
    VCI_INIT_CONFIG initConfig;
    memset(&initConfig,0,sizeof(initConfig));
    initConfig.AccMask = 0xFFFFFFFF;
    initConfig.Mode = 0;
    initConfig.Timing0 = 0x00;
    initConfig.Timing1 = 0x1C;

    ret = VCI_OpenDevice(deviceTye,device,chanel);//���豸,ֻ��Ҫ��һ��
    RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);

    if(0==chanel || 1==chanel)//��ʼ������ʼ��ͨ��
    {
        ret = VCI_InitCAN(deviceTye,device,chanel,&initConfig);//��ʼ���豸
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);

        ret = VCI_StartCAN(deviceTye,device,chanel);//��ʼ�ɼ�
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);
        if(0==chanel)
        {
            can1.setDeviceInfo(deviceTye,device,chanel);
            can1.start();
        }
        else if(1==chanel)
        {
            can2.setDeviceInfo(deviceTye,device,chanel);
            can2.start();
        }
    }
    else if(2==chanel)//��ʼ���Ϳ�ʼ˫ͨ��
    {
        ret = VCI_InitCAN(deviceTye,device,0,&initConfig);//��ʼ���豸
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);

        ret = VCI_StartCAN(deviceTye,device,0);//��ʼ�ɼ�
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);
        can1.setDeviceInfo(deviceTye,device,0);
        can1.start();

        ret = VCI_InitCAN(deviceTye,device,1,&initConfig);//��ʼ���豸
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);

        ret = VCI_StartCAN(deviceTye,device,1);//��ʼ�ɼ�
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);
        can2.setDeviceInfo(deviceTye,device,1);
        can2.start();
    }
    else
    {
        ret = RET_ERR;
        return ret;
    }
    return ret;
}

/**
 *������:�ر�CAN
 *��������:NULL
 *��������:NULL
 *��������ֵ:NULL
 *��ע:NULL
 */
int CanManager::closeCan(int deviceTye,int device)
{
    int ret = RET_OK;
    ret = VCI_CloseDevice(deviceTye,device);
    RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);
    can1.setRcvWork(false);
    can2.setRcvWork(false);
    return ret;
}
