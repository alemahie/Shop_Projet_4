// Lemahieu Antoine 000457582 - 1ère bachelier en sciences informatique

#include <iostream>
#include "Item.hpp"
#include "Aisle.hpp"
#include "Store.hpp"

int main(){
	Store magasin("ULB", 5, 10);

	Item eau("Eau", 1.0);
	Item biere("Bière", 1.0);	//Warning si 0.9 ou != .0 ou .5
	Item banane("Banane", 1.5);
	Item pomme("Pomme", 2.0);
	Item feuilles("feuilles", 4.0);
	Item chemise("Chemise", 20.0);
	Item medoc("Médicament", 10.0);
	Item bonbons("Bonbons", 5.0);
	Item pates("Pâtes", 2.5);
	Item guitare("Fender", 299.5);

	std::cout << guitare.getName() << std::endl;
	std::cout << guitare.getPrice() << std::endl;

	Aisle* ptr = magasin.getAisle(3);
	std::cout << ptr << std::endl;

	ptr->add(eau, 2);	//add
	ptr->add(biere, 3);
	ptr->add(pates, 2);
	ptr->add(bonbons, 3);
	ptr->add(guitare, 1);
	
	ptr->describe();

	return 0;
}
