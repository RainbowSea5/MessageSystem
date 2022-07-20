#pragma once

// дһЩ�����Ķ��� ���

#define SINGLETON_DECLARATION(a) private:\
	static a* _instance;\
public:\
	static a getInstance();\
	

#define SINGLETON_DEFINITION(T) \
T T::getInstance()\
	{\
		if(_instance==NULL)\
			_instance= new T();\
		return *_instance;\
	}\




