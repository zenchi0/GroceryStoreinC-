/**********************************************************************
*
* Gubenia_Stephen_FP.cpp
*
* CMIS 315, Spring 2015, OL1
*
* DUE: Sunday, March 8, 2015, 11:59pm EDT
*
**********************************************************************/

// Driver to test Food hierarchy
#include <iostream>
#include <vector>
#include <typeinfo>
#include <exception>

using namespace std;

//class header includes
#include "Food.h"
#include "Dairy.h"
#include "Fruit.h"
#include "Meat.h"

int main()
{

		// prompt the user for the number of foods to process
		int numItems;


		cout << "How many items are you buying? ";
		cin >> numItems;


			// create the vector of foods
			vector < Food * >foods(numItems);

			// variable declarations
			int   in_foodOption;
			char  answer;
			float in_price;
			bool  in_organic;
			bool  in_seedless;
			bool  in_pastuerized;
			bool  in_lean;

			// prompt the user for each food type and its relevant information
			for (int i = 0; i < numItems; i++)
			{
				cout << endl;
				cout << "What food would you like to add to your cart?" << endl;
				cout << "  1 = Apple" << endl;
				cout << "  2 = Banana" << endl;
				cout << "  3 = Grape" << endl;
				cout << "  4 = Milk" << endl;
				cout << "  5 = Yogurt" << endl;
				cout << "  6 = Cheese" << endl;
				cout << "  7 = Beef" << endl;
				cout << "  8 = Pork" << endl;
				cout << "  9 = Chicken" << endl;
				cout << "Enter your choice: ";
				cin >> in_foodOption;

				if (in_foodOption >= 1 && in_foodOption <= 9) {
					cout << "How much does the item cost, in dollars? ";
					cin >> in_price;

					cout << "Is the item organic (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_organic = true;
					}
					else {
						in_organic = false;
					}
				}

				// add a food to the vector, depending on the user's choice
				switch (in_foodOption)
				{

					// create apple object and prompt user for fruit specific information
				case 1:
					cout << "Is the item seedless (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_seedless = true;
					}
					else {
						in_seedless = false;
					}

					foods[i] = new Apple(in_price, in_organic, in_seedless);
					break;

					// create banana object and prompt user for fruit specific information
				case 2:
					cout << "Is the item seedless (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_seedless = true;
					}
					else {
						in_seedless = false;
					}

					foods[i] = new Banana(in_price, in_organic, in_seedless);
					break;

					// create grape object and prompt user for fruit specific information
				case 3:
					cout << "Is the item seedless (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_seedless = true;
					}
					else {
						in_seedless = false;
					}

					foods[i] = new Grape(in_price, in_organic, in_seedless);
					break;

					// create milk object and prompt user for dairy specific information
				case 4:
					cout << "Is the item pastuerized (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_pastuerized = true;
					}
					else {
						in_pastuerized = false;
					}

					foods[i] = new Milk(in_price, in_organic, in_pastuerized);
					break;

					// create yogurt object and prompt user for dairy specific information
				case 5:
					cout << "Is the item pastuerized (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_pastuerized = true;
					}
					else {
						in_pastuerized = false;
					}

					foods[i] = new Yogurt(in_price, in_organic, in_pastuerized);
					break;

					// create cheese object and prompt user for dairy specific information
				case 6:
					cout << "Is the item pastuerized (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_pastuerized = true;
					}
					else {
						in_pastuerized = false;
					}

					foods[i] = new Cheese(in_price, in_organic, in_pastuerized);
					break;

					// create beef object and prompt user for meat specific information
				case 7:
					cout << "Is the item lean (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_lean = true;
					}
					else {
						in_lean = false;
					}

					foods[i] = new Beef(in_price, in_organic, in_lean);
					break;

					// create pork object and prompt user for meat specific information
				case 8:
					cout << "Is the item lean (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_lean = true;
					}
					else {
						in_lean = false;
					}

					foods[i] = new Pork(in_price, in_organic, in_lean);
					break;

					// create chick object and prompt user for meat specific information
				case 9:
					cout << "Is the item lean (Y/N)? ";
					cin >> answer;

					if ('Y' == answer || 'y' == answer) {
						in_lean = true;
					}
					else {
						in_lean = false;
					}

					foods[i] = new Chicken(in_price, in_organic, in_lean);
					break;

				default:
					cout << "ERROR! Invalid option entered. Try again." << endl;
					i--;      // so when the loop increments, i is its original value
					continue; // iterate the loop
				}
			}

			// output Food objects and the cart total
			cout << endl;
			cout << "Here are the foods in your cart: " << endl;
			float cartTotal = 0;
			for (int i = 0; i < numItems; i++)
			{
				cout << "ITEM #" << i + 1 << endl;
				cout << *foods[i] << endl;
				cartTotal += (*foods[i]).getPrice();
			}

			cout << "The total price of the items in your cart is $" << cartTotal << endl;

			system("pause");

			return 0;

} // end main
