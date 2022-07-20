#pragma once

// 写一些公共的定义 宏等

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




