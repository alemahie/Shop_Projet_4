// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#include <iostream>
#include <vector>
#include "Store.hpp"
#include "Aisle.hpp"
#include "Item.hpp"

Store::Store(std::string name, int aislesNumber, int itemsNumber) : _name(name), _aislesNumber(aislesNumber), _itemsNumber(itemsNumber), _availableSpace(aislesNumber*itemsNumber)
{
	for(int i = 0; i < aislesNumber; i++)	//Initialisation du vector.
	{
		_aisles.push_back(Aisle(i+1, itemsNumber));		//Le numéro des rayons commence à 1, les moldus comptent comme cela.
	}
}

Store::~Store()
{

}

void Store::getActifs()
{
	float sum = 0;
	for(int i = 0; i < _aislesNumber; i++)
	{
		Aisle* ptr = this->getAisle(i);
		sum += ptr->getSum();
	}
	std::cout << "Somme totale des objets du magasin : " << sum << " ULB dollars." << std::endl;
}

void Store::describe()
{
	float averageItemPrice = 1.0, maxPrice = 1.0, averageAislePrice = 1.0, totalNumber = 0.0, price = 0.0, totalPrice = 0.0;
	Item item;
	float number;
	Aisle* ptr = nullptr;

	std::cout << std::endl << "Dans le magasin '" << _name << "' il y a " << _aislesNumber << " rayons." << std::endl;

	for(int i = 0; i < _aislesNumber; i++)
	{
		ptr = this->getAisle(i);

		// Rayon
		for(int j = 0; j < ptr->getSize(); j++)
		{
			item = ptr->getItem(j);
			number = float(ptr->getItemNumber(j));

			price = item.getPrice();

			totalPrice += (price * number);
			totalNumber += number;
			
			if(price > maxPrice)
			{
				maxPrice = price;
			}
		}
	}

	averageItemPrice = totalPrice / totalNumber;
	averageAislePrice = totalPrice / float(_aislesNumber);

	std::cout << "Prix moyen des objets : " << averageItemPrice << " ULB dollars." << std::endl;
	std::cout << "Prix maximum en magasin : " << maxPrice << " ULB dollars." << std::endl;
	std::cout << "Prix moyen par rayon : " << averageAislePrice << " ULB dollars." << std::endl;
}

void Store::receiveShipment(std::vector<Item> items, std::vector<int> itemsNumber)
{	
	Item item;
	int number;
	Aisle* ptr = nullptr;

	for(unsigned int i = 0; i < items.size(); i++)
	{
		item = items[i];
		number = itemsNumber[i];
		for(int j = 0; j < _aislesNumber; j++)
		{
			ptr = this->getAisle(j);
			
		}
		
		
	}
}


void Store::sell(std::vector<Item> items, std::vector<int> itemsNumber)
{

}





Aisle* Store::getAisle(int num)
{
	return &_aisles[num];
}
