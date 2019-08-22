#include "Header.h"

void Archer::play()
{
	cout << "Archer shoot!\n";
}

void Mag::play()
{
	cout << "Mag shoot!\n";
}

void Swardsman::play()
{
	cout << "Swardsman shoot!\n";
}



Unit * FactoryMethodArvher::createPlayer()
{
	return new Archer();
}

Unit * FactoryMethodMag::createPlayer()
{
	return new Mag();
}

Unit * FactoryMethodSwardsman::createPlayer()
{
	return new Swardsman();
}
