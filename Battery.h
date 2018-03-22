/*
 * Battery.h
 *
 *  Created on: Mar 15, 2018
 *      Author: bishe
 */

#ifndef BATTERY_H_
#define BATTERY_H_

#include "Electronic.h"
#include <iostream>
using namespace std;

class Battery : public Electronic
{
// Private battery variables
private:
	double batteryValue;
	string batteryUnits = "Volt(s)";
	string batteryDescrip;

public:
	Battery(double);

	~Battery();

	double value()
	{ return batteryValue; }	// Inline function for battery value

	string units()
	{ return batteryUnits; }	// Inline function for battery units

	string description();
};

#endif /* BATTERY_H_ */
