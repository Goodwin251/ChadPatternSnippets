#pragma once
class Singleton
{
private:
	Singleton() {};
	static Singleton* instance;
	int num = 0;
public: 
	Singleton(Singleton& other) = delete;
	void operator=(const Singleton&) = delete;


	static Singleton* GetInstance();
	int IncreaseNum();

};

