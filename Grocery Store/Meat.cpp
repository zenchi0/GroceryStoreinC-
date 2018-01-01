// Member and friend definitions for class Meat
#include "Food.h"
#include "Meat.h"

//constructor
Meat::Meat(float _in_price, bool _in_organic, bool _in_lean) : Food(0, false)
{

}

// returns true if the item is seedles
bool Meat::isLean() const
{
	return _lean;
}

//constructor
Beef::Beef(float _in_price, bool _in_organic, bool _in_lean) : Meat(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_lean = _in_lean;
	_name = "BEEF";
}

void Beef::print() const{
	cout << _name << ":   cost    : $" << _price << endl;
	cout << "        organic : " << _organic << endl;
	cout << "        lean    : " << _lean << endl;
}

//constructor
Pork::Pork(float _in_price, bool _in_organic, bool _in_lean) : Meat(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_lean = _in_lean;
	_name = "PORK";
}

void Pork::print() const{
	cout << _name << ":  cost        : $" << _price << endl;
	cout << "            organic : " << _organic << endl;
	cout << "            lean    : " << _lean << endl;
}

//constructor
Chicken::Chicken(float _in_price, bool _in_organic, bool _in_lean) : Meat(0, false, false)
{
	_price = _in_price;
	_organic = _in_organic;
	_lean = _in_lean;
	_name = "CHICKEN";
}

void Chicken::print() const{
	cout << _name << ":  cost    : $" << _price << endl;
	cout << "          organic : " << _organic << endl;
	cout << "          lean    : " << _lean << endl;
}