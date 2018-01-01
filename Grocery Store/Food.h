// Definition of base-class Food 

#ifndef FOOD_H 
#define FOOD_H 
#include <iostream>

using namespace std;

class Food {

	friend ostream & operator<<(ostream &, Food &);

public: Food(float = 0.0, bool = false);
		// default constructor

		float getPrice() const;
		// returns item price in dollars

		bool isOrganic() const;
		// returns true if the item is organic

		virtual void print() const = 0;
		// output Food object protected:

		float _price;
		// price of the item, in dollars

		bool _organic;
		// true if organic, false otherwise

}; // end class Food
#endif