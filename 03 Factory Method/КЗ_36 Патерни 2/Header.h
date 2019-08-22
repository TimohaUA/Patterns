#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;


enum Players
{
	ARCHER = 1, MAG, SWARDSMAN
};


class Unit
{
public:
	virtual void play() = 0;
	virtual ~Unit() {}
};


class Archer : public Unit
{
public:
	void play() override;
};


class Mag : public Unit
{
public:
	void play() override;
};


class Swardsman : public Unit
{
public:
	void play() override;
};






__interface FactoryMethod
{
	virtual Unit* createPlayer();
};


class FactoryMethodArvher: public FactoryMethod
{
public:
	virtual Unit* createPlayer();
};


class FactoryMethodMag : public FactoryMethod
{
public:
	virtual Unit* createPlayer();
};


class FactoryMethodSwardsman : public FactoryMethod
{
public:
	virtual Unit* createPlayer();
};