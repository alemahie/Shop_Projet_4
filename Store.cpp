// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#include <iostream>
#include "Store.hpp"
#include "Aisle.hpp"

Store::Store(std::string name, int aislesNumber, int itemsNumber) : _name(name), _aislesNumber(aislesNumber), _itemsNumber(itemsNumber)
{
	for(int i = 0; i < aislesNumber; i++)	//Initialisation du vector.
	{
		_aisles.push_back(Aisle(i+1, itemsNumber));		//Le numéro des rayons commence à 1, les moldus comptent comme cela.
	}
}


Store::~Store()
{

}


Aisle* Store::getAisle(int num)
{
	return &_aisles[num];
}

