/*
Lemahieu Antoine
04/2018

Item.cpp
*/

#include <iostream>
#include "Item.hpp"

/* Constructeur */ 
Item::Item(std::string name, float price) : _name(name), _price(price)
{

}

/* Destructeur */ 
Item::~Item()
{

}

std::string Item::getName()
{
	return _name;
}

float Item::getPrice()
{
	return _price;
}

