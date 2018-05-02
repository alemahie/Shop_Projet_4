/*
Lemahieu Antoine
04/2018

Item.hpp
*/

#ifndef DEF_ITEM
#define DEF_ITEM

#include <iostream>

class Item
{
public:
	Item(std::string name, float price);
	~Item(void);
	
	std::string getName();
	float getPrice();

private:
	std::string _name;
	float _price;
};

#endif
