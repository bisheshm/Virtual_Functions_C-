// CS 1337.010 Project 3 <bxm170330> <Bishesh Manandhar>

// Header files for project
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include "Electronic.h"
#include "Resistor.h"
#include "Battery.h"
#include "Capacitor.h"

using namespace std;

int main() {

	// Creating array of objects for electronic components
	Electronic *components[100];

	// Integer variables for user menu choice and counters
	int userChoice,
	index = 0,
	countComponents = 0;

	// String to check for input validation
	string errorCheck;

	// Used to take in user component value
	double componentValue;

	// Boolean to check whether user wants to stop processing and print results
	bool stopProcessing = false;

	do
	{
		// Outputting menu for the user
		cout << "Please enter 1, 2, 3, or 4:" << endl;
		cout << "  1 - Enter information about a resistor" << endl;
		cout << "  2 - Enter information about a capacitor" << endl;
		cout << "  3 - Enter information about a battery" << endl;
		cout << "  4 - Print component information and terminate the program" << endl;
		cin >> userChoice;
		getline(cin, errorCheck);

		// Input validation on user menu choice
		if (cin.fail() || (!(errorCheck.empty())) || (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4))
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(10, '\n');
			}

			if (!(errorCheck.empty()))
			{
				cin.clear();
			}

			cout << "Entry not accepted. Please enter ONLY 1, 2, 3, OR 4" << endl;
		}

		// If user chooses menu choice 1, process value for resistor
		else if(userChoice == 1)
		{
			cout << "Please enter a value for the component" << endl;
			cin >> componentValue;
			getline(cin, errorCheck);

			// Input validation for component value
			while(componentValue < 0 || cin.fail() || (!(errorCheck.empty())))
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(10, '\n');
				}

				if (!(errorCheck.empty()))
				{
					cin.clear();
				}

				cout << "Entry not accepted. Please enter ONLY a positive, floating point value" << endl;
				cout << endl;
				cout << "Please enter a value for the component" << endl;
				cin >> componentValue;
				getline(cin, errorCheck);
			}

			// Creating new instance of resistor that takes in component value
			// Adds instance into array
			Resistor *r;
			r = new Resistor(componentValue);
			components[index] = r;

			// Increment counters
			index++;
			countComponents++;

		}

		// If user chooses menu choice 2, process data
		else if(userChoice == 2)
		{
			cout << "Please enter a value for the component" << endl;
			cin >> componentValue;

			// Input validation for component value
			while(componentValue < 0 || cin.fail() || (!(errorCheck.empty())))
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(10, '\n');
				}

				if (!(errorCheck.empty()))
				{
					cin.clear();
				}

				cout << "Entry not accepted. Please enter ONLY a positive, floating point value" << endl;
				cout << endl;
				cout << "Please enter a value for the component" << endl;
				cin >> componentValue;
				getline(cin, errorCheck);
			}

			// Create new instance of capacitor and add it to array
			Capacitor *c;
			c = new Capacitor(componentValue);
			components[index] = c;

			// Increment counters
			index++;
			countComponents++;

		}

		// If user chooses menu choice 3
		else if(userChoice == 3)
		{
			cout << "Please enter a value for the component" << endl;
			cin >> componentValue;

			// Input validation for component value
			while(componentValue < 0 || cin.fail() || (!(errorCheck.empty())))
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(10, '\n');
				}

				if (!(errorCheck.empty()))
				{
					cin.clear();
				}

				cout << "Entry not accepted. Please enter ONLY a positive, floating point value" << endl;
				cout << endl;
				cout << "Please enter a value for the component" << endl;
				cin >> componentValue;
				getline(cin, errorCheck);
			}

			// Create new instance of battery and add it to array
			Battery *b;
			b = new Battery(componentValue);
			components[index] = b;

			// Increment counters
			index++;
			countComponents++;

		}

		// If user wishes to print out report
		else if(userChoice == 4)
		{
			// Checking if there is component information. If not, message prints out and stopProcessing = true
			if (countComponents == 0)
			{
				cout << "No component information has been recorded" << endl;
				stopProcessing = true;
				cout << endl;
			}
			else
			// Prints out component information and stopProcessing = true
			{
				for (int i = 0; i < index; ++i)
				{
					cout << "Component value is " << components[i]->value() << " " << components[i]->units() << endl;
				}
				cout << endl;

				for (int i = 0; i < index; ++i)
				{
					cout << "Component " << i + 1 << " " << *components[i] << endl;
				}
				stopProcessing = true;
			}
		}

		cout << endl;

	} while (stopProcessing == false);

	return 0;
}	// End of main()
