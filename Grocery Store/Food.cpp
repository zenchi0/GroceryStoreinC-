// Member and friend definitions for class Food
#include "Food.h"

// constructors
Food::Food(float _in_price, bool _in_organic)
{
	_price = _in_price;
	_organic = _in_organic;
}

// returns item price in dollars
float Food::getPrice() const
{
	return _price;
}

// returns true if the item is organic
bool Food::isOrganic() const
{
	return _organic;
}

// overloaded output operator
ostream & operator<<(ostream &out, Food &s)
{
	s.print();
	return out;
}
