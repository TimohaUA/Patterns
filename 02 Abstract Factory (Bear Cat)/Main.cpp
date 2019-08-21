//#include "Singleton.h"
#include "Abstract Factory.h"

//Singleton - ОДИНАК --- породжувальний патерн
/*Singleton* Singleton::obj = 0;
Logger* Logger::obj = 0;*/






int main()
{
	setlocale(LC_ALL, "RUS");
	// GOF Book

	//Abstract Factory --- абстрактна фабрика

	WoodenToys* wooden = new WoodenToys();
	useToys(wooden);

	system("pause");
}