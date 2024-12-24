#include "mycanthread.h"



MyCanThread::MyCanThread():
    QThread()
{

}

MyCanThread::MyCanThread(const int a,const int b,const int c) :
    QThread()
{
    this->deviceTye = a;
    this->device = b;
    this->chanel = c;
    status = UNCONNECT;
}


void MyCanThread::setDeviceInfo(const int a,const int b,const int c)
{
    this->deviceTye = a;
    this->device = b;
    this->chanel = c;
}


void MyCanThread::run()
{
    VCI_CAN_OBJ info[100];
    VCI_ERR_INFO errInfo;
    int bufLength=0;
    DWORD rcvLength=0;
    while(!stopRcv)
    {
        Sleep(700);
        bufLength = VCI_GetReceiveNum(this->deviceTye,this->device,this->chanel);
        if(0!=bufLength)
        {
            rcvLength = VCI_Receive(this->deviceTye,this->device,this->chanel,info,100,20);
            if(0xFFFFFFFF == rcvLength)
            {
                VCI_ReadErrInfo(this->deviceTye,this->device,this->chanel,&errInfo);
            }
            else
            {
                emit getCanDataSignal(info,(int)rcvLength);
            }
        }
    }
}
