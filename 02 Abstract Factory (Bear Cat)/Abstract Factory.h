#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Toy abstract
{
	string name;
public:
	Toy(string _name);
	void Print();
};


class Bear :public Toy
{
public:
	Bear(string _name);

};


class Cat :public Toy
{
public:
	Cat(string name);
};


class TeddyCat :public Cat
{
public:
	TeddyCat();
};


class TeddyBear :public Bear
{
public:
	TeddyBear();
};


class WoodenCat :public Cat
{
public:
	WoodenCat();
};


class WoodenBear :public Bear
{
public:
	WoodenBear();
};


__interface IToysFactory
{
public:
	virtual Bear* createBear()=0;
	virtual Cat* createCat()=0;
};


class WoodenToys: public IToysFactory
{
public:
	Bear* createBear();
	Cat* createCat();
};


class TaddyToys
{
public:
	Bear* createBear();
	Cat* createCat();
};


void useToys(IToysFactory* toy);