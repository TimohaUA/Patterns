#include "Abstract Factory.h"

Toy::Toy(string _name)
{
	this->name = _name;
}

void Toy::Print()
{
	cout << name << endl;
}

Bear::Bear(string name) :Toy(name + " Bear")
{
}

Cat::Cat(string name) : Toy(name + " Cat")
{
}

TeddyCat::TeddyCat() : Cat("Teddy")
{
}

TeddyBear::TeddyBear() : Bear("Teddy")
{
}

WoodenCat::WoodenCat() : Cat("Wooden")
{
}

WoodenBear::WoodenBear() : Bear("Wooden")
{
}

Bear * WoodenToys::createBear()
{
	return new WoodenBear();
}

Cat * WoodenToys::createCat()
{
	return new WoodenCat();
}

Bear * TaddyToys::createBear()
{
	return new TeddyBear();
}

Cat * TaddyToys::createCat()
{
	return new TeddyCat();
}

void useToys(IToysFactory* toy)
{
	Bear* bear = toy->createBear();
	bear->Print();
	Cat* cat = toy->createCat();
	cat->Print();

}
