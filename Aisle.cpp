// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#include <iostream>
#include "Aisle.hpp"
#include "Item.hpp"

Aisle::Aisle() : _number(0), _capacity(0)
{

}

Aisle::Aisle(int number, int capacity) : _number(number), _capacity(capacity)
{

}

Aisle::~Aisle()
{

}

void Aisle::describe() const
{
	std::cout << "Dans ce rayon il y a :" << std::endl;
	for(unsigned int i = 0; i < _items.size(); i++)
	{
		std::cout << "- " << _items[i].getName() << ", il y en a " << _itemsNumber[i] << " au prix de " << _items[i].getPrice() << " ULB dollars."<< std::endl;
	}
}

void Aisle::add(Item item, int numberAdd)
{

	std::cout << _capacity << std::endl;
	
	if(_capacity - numberAdd >= 0)
	{
		std::cout << "Ok" << std::endl;
	
		bool found = false;		
		unsigned int i = 0;

		while(i < _items.size() and not found)
		{
			if(item.getName() == _items[i].getName())
			{
				_itemsNumber[i] += numberAdd;
				_capacity -= numberAdd;
				found = true;
			}
			i++;
		}

		if(not found)
		{
			_items.push_back(item);
			_itemsNumber.push_back(numberAdd);	
			_capacity -= numberAdd;
		}
	}
	else
	{
		std::cout << "Il n'y a malheuresement pas assez de place dans ce rayon, connard." << std::endl;
	}
}

int Aisle::getNumber() const
{
	return _number;
}

int Aisle::getCapacity() const
{
	return _capacity;
}

