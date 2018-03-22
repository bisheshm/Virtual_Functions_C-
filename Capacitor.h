/*
 * Capacitor.h
 *
 *  Created on: Mar 15, 2018
 *      Author: bishe
 */

#ifndef CAPACITOR_H_
#define CAPACITOR_H_

#include <iostream>
using namespace std;

class Capacitor : public Electronic
{
// Private capacitor variables
private:
	double capacitorValue;
	string capacitorUnits = "Farad(s)";
	string capacitorDescrip;

public:
	Capacitor(double);

	~Capacitor();

	double value()
	{ return capacitorValue; }		// Inline function

	string units()
	{ return capacitorUnits; }		// Inline function

	string description();

};

#endif /* CAPACITOR_H_ */
