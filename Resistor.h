/*
 * Resistor.h
 *
 *  Created on: Mar 15, 2018
 *      Author: bishe
 */

#ifndef RESISTOR_H_
#define RESISTOR_H_

#include <iostream>
using namespace std;

class Resistor : public Electronic
{
// Private variables for resistorValue, resistorUnits, and resistorDescrip
private:
	double resistorValue;
	string resistorUnits = "Ohm(s)";
	string resistorDescrip;

public:
	// Public function declarations
	Resistor(double);

	~Resistor();

	double value()
	{ return resistorValue; }	// Inline function for resistor value

	string units()
	{ return resistorUnits; }	// Inline function for resistor units

	string description();

};


#endif /* RESISTOR_H_ */
