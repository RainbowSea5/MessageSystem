#pragma once

/*
* 信息处理接口
*/
class IMessageProcess
{
public:
	//信息过来
	virtual int_32 onMessage(void* args) = 0;
};

