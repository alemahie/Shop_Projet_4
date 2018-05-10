// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#include <iostream>
#include <vector>
#include "Aisle.hpp"
#include "Item.hpp"

Aisle::Aisle() : _number(0), _capacity(0), _size(0)
{

}

Aisle::Aisle(int number, int capacity) : _number(number), _capacity(capacity), _size(0)
{

}

Aisle::~Aisle()
{

}

void Aisle::describe() const
{
	if(_items.size() == 0)
	{
		std::cout << "Le rayon " << _number << " est vide." << std::endl;
	}
	else
	{
		std::cout << "Dans le rayon " << _number << " il y a :" << std::endl;
		for(unsigned int i = 0; i < _items.size(); i++)
		{
			std::cout << "    - " << _items[i].getName() << ", il y en a " << _itemsNumber[i] << " au prix de " << _items[i].getPrice() << " ULB dollars."<< std::endl;
		}
	}
}

bool Aisle::add(Item item, int numberAdd)
{
	bool added = true;
	if(_capacity - numberAdd >= 0)
	{
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
			_size += 1;
		}
	}
	else
	{
		added = false;
	}
	return added;
}

void Aisle::remove(Item item, int numberRmv)
{
	unsigned int i = 0;
	bool found = false;
	
	while(i < _items.size() and not found)
	{
		if(item.getName() == _items[i].getName())
		{
			if(_itemsNumber[i] - numberRmv > 0)
			{
				_itemsNumber[i] -= numberRmv;
				_capacity += numberRmv;
			}
			else if(_itemsNumber[i] - numberRmv == 0)
			{
				_items.erase(_items.begin()+i);
				_itemsNumber.erase(_itemsNumber.begin()+i);
				_capacity += numberRmv;
				_size -= 1;
			}
			else
			{
				std::cout << "Il n'y a pas assez d'éléments à enlever, désolé." << std::endl;
			}
		}
		i++;
	}	
}


int Aisle::speRemove(Item item, int numberRmv)
{
	unsigned int i = 0; 
	bool found = false;
	while(i < _items.size() and not found)
	{
		if(item.getName() == _items[i].getName())
		{
			if(_itemsNumber[i] - numberRmv > 0)
			{
				_itemsNumber[i] -= numberRmv;
				_capacity += numberRmv;
			}
			else if(_itemsNumber[i] - numberRmv == 0)
			{
				_items.erase(_items.begin()+i);
				_itemsNumber.erase(_itemsNumber.begin()+i);
				_capacity += numberRmv;
				_size -= 1;
			}
			else
			{
				_items.erase(_items.begin()+i);
				numberRmv -= _itemsNumber[i];
				_itemsNumber.erase(_itemsNumber.begin()+i);
			}
		}
		i++;
	}	
	return numberRmv;
}



int Aisle::getNumber() const
{
	return _number;
}

int Aisle::getCapacity() const
{
	return _capacity;
}

int Aisle::getSize() const
{
	return _size;
}

Item Aisle::getItem(int i) const
{
	return _items[i];
}

int Aisle::getItemNumber(int i) const
{
	return _itemsNumber[i];
}

float Aisle::getSum() const
{
	float sum = 0;
	for(unsigned int i = 0; i < _items.size(); i++)
	{
		sum += (_items[i].getPrice() * float(_itemsNumber[i]));		// May do that ?
	}
	return sum;
}

