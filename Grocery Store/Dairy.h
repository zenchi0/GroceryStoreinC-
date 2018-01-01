// Definition of child-class Dairy

#ifndef DAIRY_H 
#define DAIRYH
#include <iostream>
#include <string>
#include "Food.h"

using namespace std;

class Dairy : public Food {

public: Dairy(float = 0.0, bool = false, bool = false);
		// default constructor

protected: bool _pastuerized;

		   bool isPastuerized() const;
		   // returns true if the dairy is pasteurized
};

class Milk : public Dairy{

public: Milk(float = 0.0, bool = false, bool = false);
		// default constructor

		//overloaded print method
		void print() const;

private: string _name;

};

class Yogurt : public Dairy{

public: Yogurt(float = 0.0, bool = false, bool = false);
		// default constructor

		//overloaded print method
		void print() const;

private: string _name;

};

class Cheese : public Dairy{

public: Cheese(float = 0.0, bool = false, bool = false);
		// default constructor

		//overloaded print method
		void print() const;

private: string _name;

};
#endif