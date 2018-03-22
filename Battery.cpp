/*
 * Battery.cpp
 *
 *  Created on: Mar 15, 2018
 *      Author: bishe
 */

#include "Electronic.h"
#include "Battery.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Battery constructor
Battery::Battery(double batteryValueUser)
{
	batteryValue = batteryValueUser;
}

Battery::~Battery()
{

}

// Function for battery description
string Battery::description()
{
	string batteryStringValue;
	stringstream sso;
	sso << batteryValue;
	sso >> batteryStringValue;

	string preText = "Battery Value (";
	string postText = " Volt(s))";

	batteryDescrip = preText + batteryStringValue + postText;
	return batteryDescrip;
}


