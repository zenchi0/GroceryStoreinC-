// Member and friend definitions for class Fruit
#include "Food.h"
#include "Fruit.h"

//constructor
Fruit::Fruit(float _in_price, bool _in_organic, bool _in_seedless) : Food(0, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_seedless = _in_seedless;	
}

// returns true if the item is seedles
bool Fruit::isSeedless() const
{
	return _seedless;
}

//constructor
Apple::Apple(float _in_price, bool _in_organic, bool _in_seedless) : Fruit(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_seedless = _in_seedless;
	_name = "APPLE";
}

void Apple::print() const{
	cout << _name << ":  cost  : $ " << _price << endl;
	cout << "        organic : " << _organic << endl;
	cout << "        seedless: " << _seedless << endl;
}

//constructor
Banana::Banana(float _in_price, bool _in_organic, bool _in_seedless) : Fruit(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_seedless = _in_seedless;
	_name = "BANANA";
}

void Banana::print() const{
	cout << _name << ": cost    : $" << _price << endl;
	cout << "        organic : " << _organic << endl;
	cout << "        seedless: " << _seedless << endl;
}
//constructor
Grape::Grape(float _in_price, bool _in_organic, bool _in_seedless) : Fruit(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_seedless = _in_seedless;
	_name = "GRAPE";
}

void Grape::print() const{
	cout << _name << ":  cost    : $ " << _price << endl;
	cout << "        organic : " << _organic << endl;
	cout << "        seedless: " << _seedless << endl;
}