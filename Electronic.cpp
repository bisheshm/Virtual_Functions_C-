/*
 * Electronic.cpp
 *
 *  Created on: Mar 15, 2018
 *      Author: bishe
 */

#include "Electronic.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

// Overloaded operator for <<
ostream & operator << (ostream & output, Electronic &e)
{
	output << e.description();
	return output;
}

Electronic::~Electronic()
{

}


