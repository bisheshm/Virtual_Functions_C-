/*
 * Capacitor.cpp
 *
 *  Created on: Mar 15, 2018
 *      Author: bishe
 */

#include "Electronic.h"
#include "Capacitor.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Capacitor constructor
Capacitor::Capacitor(double capacitorValueUser)
{
	capacitorValue = capacitorValueUser;
}

Capacitor::~Capacitor()
{

}

// Function for capacitor description
string Capacitor::description()
{
	string capacitorStringValue;
	stringstream sso;
	sso << capacitorValue;
	sso >> capacitorStringValue;

	string preText = "Capacitor Value (";
	string postText = " Farad(s))";

	capacitorDescrip = preText + capacitorStringValue + postText;
	return capacitorDescrip;
}
