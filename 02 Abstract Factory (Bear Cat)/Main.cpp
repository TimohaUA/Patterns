//#include "Singleton.h"
#include "Abstract Factory.h"

//Singleton - ������ --- �������������� ������
/*Singleton* Singleton::obj = 0;
Logger* Logger::obj = 0;*/






int main()
{
	setlocale(LC_ALL, "RUS");
	// GOF Book

	//Abstract Factory --- ���������� �������

	WoodenToys* wooden = new WoodenToys();
	useToys(wooden);

	system("pause");
}