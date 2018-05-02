/*
Lemahieu Antoine
04/2018

Aisle.hpp
*/

#ifndef DEF_AISLE
#define DEF_AISLE

#include "Item.hpp"

class Aisle
{
public:
	Aisle(int number, int capacity);
	~Aisle(void);
	void add(Item item, int numberAdd);
	int getNumber();

private:
	int _number;
	int _capacity;
};

#endif
