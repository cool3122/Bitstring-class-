/*****************************************************************//**
 * \file   Bitstring.h
 * \brief  INTERFACE file for bitstring class
 *
 * \author s0553644
 * \date   November 2023
 *********************************************************************/
#pragma once
#include <string>
#include <iostream>

class Bitstring {
private:
	unsigned int bs_numbits;
	std::string bs_string;

	std::string intToString(int value);
public:
	//constructors
	Bitstring(int value = 0, unsigned int bits = 32); // parameterized constructor with defaults
	
	Bitstring(const Bitstring& copyFrom); // copy constructor

	//accessors
	std::string get();

	//mutators
	void set(int value); //change the bs_string to the bitstring value

	void resize(unsigned int bits); // change the width of bs_string

	//friends
	friend bool isEqual(const Bitstring& bs1, const Bitstring& bs2);
};




