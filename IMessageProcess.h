#pragma once

/*
* ��Ϣ����ӿ�
*/
class IMessageProcess
{
public:
	//��Ϣ����
	virtual int_32 onMessage(void* args) = 0;
};

