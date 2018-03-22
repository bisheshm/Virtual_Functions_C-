/*
 * Resistor.cpp
 *
 *  Created on: Mar 15, 2018
 *      Author: bishe
 */

#include "Electronic.h"
#include "Resistor.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Resistor constructor
Resistor::Resistor(double resistorValueUser)
{
	resistorValue = resistorValueUser;
}

Resistor::~Resistor()
{

}

// function for resistor description
string Resistor::description()
{
	string resistorStringValue;
	stringstream sso;
	sso << resistorValue;
	sso >> resistorStringValue;

	string preText = "Resistor Value (";
	string postText = " Ohm(s))";

	resistorDescrip = preText + resistorStringValue + postText;
	return resistorDescrip;
}

