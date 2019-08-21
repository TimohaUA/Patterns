#include "Singleton.h"



Singleton * Singleton::getObj(int v)
{
	if (obj == nullptr)
	{
		obj = new Singleton(v);
	}
	return obj;
}

int Singleton::gatValue() const
{
	return value;
}

void Singleton::setValue(int v)
{
	this->value = v;
}





Logger * Logger::getObj(string _login)
{
	if (obj == nullptr)
	{
		obj = new Logger(_login);
	}
	return obj;
}

void Logger::PrintUser()
{
	cout << "В систему зайшов - " << login << "!!!\n";
}

void Logger::setLogin(string _login)
{
	this->login = _login;
}
