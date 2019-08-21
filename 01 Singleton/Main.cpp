//#include "Singleton.h"
#include "Abstract Factory.h"

//Singleton - ОДИНАК --- породжувальний патерн
/*Singleton* Singleton::obj = 0;
Logger* Logger::obj = 0;*/






int main()
{
	setlocale(LC_ALL, "RUS");
	// GOF Book


	//Singleton - ОДИНАК --- породжувальний патерн
	Singleton* vallet1 = Singleton::getObj();
	cout << vallet1->gatValue() << endl;
	Singleton* vallet2 = Singleton::getObj(500);
	cout << vallet2->gatValue() << endl;
	vallet2->setValue(1200);
	cout << "______________________________\n";
	cout << vallet1->gatValue() << endl;
	cout << vallet2->gatValue() << endl;
	cout << "******************************\n";
	Logger* user = Logger::getObj();
	user->PrintUser();
	Logger* user1 = Logger::getObj();
	user1->PrintUser();
	user1->setLogin("Admin");
	cout << "______________________________\n";
	user->PrintUser();
	user1->PrintUser();

	system("pause");
}