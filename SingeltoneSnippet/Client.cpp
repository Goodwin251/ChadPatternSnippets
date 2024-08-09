#include "Client.h"

Client::Client()
{
	Singleton* instance1 = Singleton::GetInstance();
	std::cout << instance1->IncreaseNum() << std::endl;
}
