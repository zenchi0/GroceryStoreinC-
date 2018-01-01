// Definition of child-class Meat

#ifndef MEAT_H 
#define MEATH
#include <iostream>
#include <string>
#include "Food.h"

using namespace std;

class Meat : public Food {

public: Meat(float = 0.0, bool = false, bool = false);
		// default constructor

protected: bool _lean;

		   bool isLean() const;
		   // returns true if the meat is lean
};

class Beef : public Meat {

public: Beef(float = 0.0, bool = false, bool = false);
		// default constructor

		//overloaded print method
		void print() const;

private: string _name;
};

class Pork : public Meat {

public: Pork(float = 0.0, bool = false, bool = false);
		// default constructor

		//overloaded print method
		void print() const;

private: string _name;

};

class Chicken : public Meat {

public: Chicken(float = 0.0, bool = false, bool = false);
		// default constructor

		//overloaded print method
		void print() const;

private: string _name;
};

#endif