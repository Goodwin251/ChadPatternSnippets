#include "Singleton.h"

Singleton* Singleton::instance = nullptr;
Singleton* Singleton::GetInstance()
{
	if(instance == nullptr)
		instance = new Singleton();
	return instance;
}


int Singleton::IncreaseNum()
{
	if (instance) 
	{
		instance->num++;
		return instance->num;
	}
	return -1;
}



