#pragma once

#include <iostream>
#include <string>
#include <ctime>

using namespace std;


//Singleton - ОДИНАК --- породжувальний патерн
class Singleton
{
	int value;
	static Singleton* obj;
	Singleton(int v) :value(v) {};
public:
	static Singleton*getObj(int v=4100);
	int gatValue()const;
	void setValue(int v);
};



class Logger
{
	string login;
	static Logger* obj;
	Logger(string _login) :login(_login) {};
public:
	static Logger*getObj(string _login = "User");
	void PrintUser();
	void setLogin(string _login);
};