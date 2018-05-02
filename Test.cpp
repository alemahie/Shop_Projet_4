/*
Lemahieu Antoine
04/2018

Test.cpp
*/

#include <iostream>
#include "Item.hpp"
#include "Aisle.hpp"
#include "Store.hpp"

int main(){
	
	Item test("Banane", 2.0);

	float prix;
	int yolo;

	prix = test.getPrice();
	std::cout << "Prix banane : " << prix << std::endl;

	Aisle range(1, 10);

	yolo = range.getNumber();
	std::cout << "num de range " << yolo << std::endl;

	range.add(test, 2);
	range.add(test, 2);
	range.add(test, 2);
	range.add(test, 2);
	range.add(test, 2);
	range.add(test, 2);

	lolplease();
	
	return 0;
}
