// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#ifndef DEF_STORE
#define DEF_STORE

#include <iostream>
#include <vector>
#include "Aisle.hpp"


class Store{
	public:
		Store(std::string name, int aislesNumber, int itemsNumber);
		~Store(void);
		Aisle* getAisle(int num);
		

	
	private:
		std::string _name;
		int const _aislesNumber;
		int _itemsNumber;	
		std::vector<Aisle> _aisles = {};
};

#endif
