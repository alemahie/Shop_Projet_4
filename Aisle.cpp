/*
Lemahieu Antoine
04/2018

Aisle.cpp
*/

#include <iostream>
#include "Aisle.hpp"
#include "Item.hpp"

Aisle::Aisle(int number, int capacity) : _number(number), _capacity(capacity)
{

}

Aisle::~Aisle()
{

}

void Aisle::add(Item item, int numberAdd)
{
	/* Question ???
	Une erreur est renvoyé, litérallement ou message ? */

	if(_capacity - numberAdd >= 0)
	{
		std::cout << "Ok" << std::endl;
		_capacity -= numberAdd;				//Vecteur avec Items
	}
	else
	{
		std::cout << "Nik toi" << std::endl;
	}
}

int Aisle::getNumber()
{
	return _number;
}
