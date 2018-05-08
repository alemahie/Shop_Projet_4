// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#ifndef DEF_AISLE
#define DEF_AISLE

#include <vector>
#include "Item.hpp"

class Aisle
{
public:
	Aisle();
	Aisle(int number, int capacity);
	~Aisle(void);
	void describe() const;
	void add(Item item, int numberAdd);
	int getNumber() const;
	int getCapacity() const;

private:
	int const _number;
	int _capacity;
	std::vector<Item> _items = {};
	std::vector<int> _itemsNumber = {};
};

#endif
