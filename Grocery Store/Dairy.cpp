// Member and friend definitions for class Dairy
#include "Food.h"
#include "Dairy.h"

//constructor
Dairy::Dairy(float _in_price, bool _in_organic, bool _in_pastuerized) : Food(0, false)
{

}

// returns true if the item is seedles
bool Dairy::isPastuerized() const
{
	return _pastuerized;
}

//constructor
Milk::Milk(float _in_price, bool _in_organic, bool _in_pastuerized) : Dairy(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_pastuerized = _in_pastuerized;
	_name = "MILK";
}

void Milk::print() const{
	cout << _name << ":   cost       : $" << _price << endl;
	cout << "        organic    : " << _organic << endl;
	cout << "        pastuerized: " << _pastuerized << endl;
}


//constructor
Yogurt::Yogurt(float _in_price, bool _in_organic, bool _in_pastuerized) : Dairy(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_pastuerized = _in_pastuerized;
	_name = "YOGURT";
}

void Yogurt::print() const{
	cout << _name << ": cost    : $" << _price << endl;
	cout << "        organic : " << _organic << endl;
	cout << "        seedless: " << _pastuerized << endl;
}


//constructor
Cheese::Cheese(float _in_price, bool _in_organic, bool _in_pastuerized) : Dairy(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_pastuerized = _in_pastuerized;
	_name = "CHEESE";
}

void Cheese::print() const{
	cout << _name << ": cost       : $" << _price << endl;
	cout << "        organic    : " << _organic << endl;
	cout << "        pastuerized: " << _pastuerized << endl;
}