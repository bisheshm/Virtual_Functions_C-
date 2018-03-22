/*
 * Electronic.h
 *
 *  Created on: Mar 15, 2018
 *      Author: bishe
 */

#ifndef ELECTRONIC_H_
#define ELECTRONIC_H_

#include<iostream>
using namespace std;

class Electronic
{
public:

	// Creating virtual functions for value, units and description
	virtual ~Electronic();
	virtual double value() = 0;
	virtual string units() = 0;
	virtual string description() = 0;

	// Declaration of overloaded operator
	friend ostream & operator << (ostream & output, Electronic &e);

};


#endif /* ELECTRONIC_H_ */
