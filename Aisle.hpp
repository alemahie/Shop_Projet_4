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
	bool add(Item item, int numberAdd);
	void remove(Item item, int numberRmv);
	int getNumber() const;
	int getCapacity() const;
	int getSize() const;
	Item getItem(int i) const;
	int getItemNumber(int i) const;
	float getSum() const;

private:
	int const _number;
	int _capacity;
	int _size;
	std::vector<Item> _items = {};
	std::vector<int> _itemsNumber = {};
};

#endif
