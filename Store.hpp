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
		void getActifs();
		void describe();
		void receiveShipment(std::vector<Item> items, std::vector<int> itemsNumber);
		void sell(std::vector<Item> items, std::vector<int> itemsNumber);
		Aisle* getAisle(int num);

	private:
		std::string _name;
		int const _aislesNumber;
		int _itemsNumber;	
		int _availableSpace;
		std::vector<Aisle> _aisles = {};
};

#endif
