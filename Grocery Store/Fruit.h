// Definition of child-class Fruit

#ifndef FRUIT_H 
#define FRUITH 
#include <iostream>
#include <string>
#include "Food.h"

using namespace std;

class Fruit : public Food {

public:  Fruit(float = 0.0, bool = false, bool = false);
		 // default constructor

protected: bool _seedless;

		   bool isSeedless() const;
		   // returns true if the fruit is seedless
};

class Apple : public Fruit {

public:   Apple(float = 0.0, bool = false, bool = false);
		 // default constructor

		  //overloaded print method
		  void print() const;

private: string _name;

};

class Banana : public Fruit {

public:  Banana(float = 0.0, bool = false, bool = false);
		 // default constructor

		 //overloaded print method
		 void print() const;

private: string _name;

};

class Grape : public Fruit {

public:  Grape(float = 0.0, bool = false, bool = false);
		 // default constructor

		 //overloaded print method
		 void print() const;

private: string _name;

};

#endif