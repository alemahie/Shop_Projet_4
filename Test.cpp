// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#include <iostream>
#include <vector>
#include "Item.hpp"
#include "Aisle.hpp"
#include "Store.hpp"

int main(){
	// Item.
	std::cout << "Test class Item :" << std::endl << std::endl;

	Item eau("eau", 1.0);							//Constructeur
	Item biere("bière", 1.0);
	Item banane("banane", 1.5);
	Item pomme("pomme", 2.0);
	Item feuilles("feuilles", 4.0);
	Item chemise("chemise", 20.0);
	Item medoc("médicament", 10.0);
	Item bonbons("bonbons", 5.0);
	Item pates("pâtes", 2.5);
	Item guitare("fender", 299.5);

	std::cout << "Name : " << eau.getName() << std::endl;		//getName()
	std::cout << "Price : " << eau.getPrice() << std::endl;		//getPrice()



	// Aisle.
	std::cout << "-------------------------------" << std::endl << "Test class Aisle :" << std::endl << std::endl;
	
	Aisle aisle(17, 23);							//Constructeur
	int num = aisle.getNumber();					//getNumber()
	std::cout << "Numéro du rayon : " << num << std::endl;

	aisle.add(biere, 7);							//add()
	aisle.add(pates, 8);
	aisle.add(bonbons, 18);							//add error
	std::cout << std::endl;
	aisle.describe();								//describe()
	aisle.remove(biere, 4);							//remove
	aisle.remove(pates, 20);						//remove error
	std::cout << std::endl;
	aisle.describe();


	//std::cout << "Pas assez de place dans le rayon numéro " << this->getNumber() << " pour ajouter " << numberAdd << " " << item.getName() << std::endl;
	

	// Store.
	std::cout << "-------------------------------" << std::endl << "Test class Store :" << std::endl << std::endl;

	Store magasin("ULB", 5, 10);

	Aisle* ptr = nullptr;
	ptr = magasin.getAisle(3);						//getAisle()
	ptr->add(eau, 2);
	ptr->describe();

	std::vector<Item> items = {biere, chemise, feuilles, pomme, banane};
	std::vector<int> itemsNumber = {6,5,10,5,3};
	magasin.receiveShipment(items, itemsNumber);	//receiveShipment()
	std::cout << std::endl;
	magasin.getActifs();							//getActifs()
	magasin.describe();								//describe()
	std::cout << std::endl;

	for(unsigned int i = 0; i < 5; i++)
	{
		ptr = magasin.getAisle(i);
		ptr->describe();
	}

	items = {eau};
	itemsNumber = {50};
	std::cout << std::endl;
	magasin.receiveShipment(items, itemsNumber);	//receiveShipment error

	items = {biere, pates, eau};
	itemsNumber = {7, 4, 4};
	magasin.receiveShipment(items, itemsNumber);
	std::cout << std::endl;
	magasin.getActifs();
	magasin.describe();
	std::cout << std::endl;

	for(unsigned int i = 0; i < 5; i++)
	{
		ptr = magasin.getAisle(i);
		ptr->describe();
	}

	items = {biere, pates};
	itemsNumber = {2, 2};
	magasin.receiveShipment(items, itemsNumber);	//Shipment filling gaps.
	std::cout << std::endl;
	magasin.getActifs();
	magasin.describe();
	std::cout << std::endl;

	for(unsigned int i = 0; i < 5; i++)
	{
		ptr = magasin.getAisle(i);
		ptr->describe();
	}


	std::cout << std::endl << "Sell" << std::endl;

	items = {biere, chemise, feuilles, pomme};
	itemsNumber = {4,7,10,1};
	magasin.sell(items, itemsNumber);				//sell()
	std::cout << std::endl;
	magasin.getActifs();
	magasin.describe();

	for(unsigned int i = 0; i < 5; i++)
	{
		ptr = magasin.getAisle(i);
		ptr->describe();
	}

	return 0;
}
