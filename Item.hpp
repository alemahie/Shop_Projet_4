// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#ifndef DEF_ITEM
#define DEF_ITEM

#include <iostream>

class Item
{
public:
	Item(std::string name, float price);
	~Item(void);
	
	std::string getName() const;
	float getPrice() const;

private:
	std::string _name;
	float _price;
};

#endif
