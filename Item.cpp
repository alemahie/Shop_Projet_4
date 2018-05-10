// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique


#include <iostream>
#include "Item.hpp"

Item::Item() : _name(""), _price(0)
{

}

/* Constructeur */ 
Item::Item(std::string name, float price) : _name(name), _price(price)
{

}

/* Destructeur */ 
Item::~Item()
{

}

std::string Item::getName() const
{
	return _name;
}

float Item::getPrice() const
{
	return _price;
}

