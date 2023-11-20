/*****************************************************************//**
 * \file   Bitstring.cpp
 * \brief  IMPLEMENTATION of Bitstring class
 * 
 * \author s0553644
 * \date   November 2023
 *********************************************************************/
#include "Bitstring.h"
#include <string>

std::string Bitstring::intToString(int value) {
	std::string s(""); //
	for (unsigned int i = 0; i < bs_numbits; ++i) { // maybe bs_numbits-1 if we have a sign bit
		if (value % 2) {
			s = "1" + s;
		}
		else {
			s = "0" + s;
		}
		value /= 2;
	}
	return s;
}

// constructors
Bitstring::Bitstring(int value, unsigned int bits) {
	//defaults set in the declaration (interface file) value = 0, bits = 32
	bs_numbits = bits;
	bs_string = intToString(value);
}

Bitstring::Bitstring(const Bitstring& copyFrom) {
	bs_numbits = copyFrom.bs_numbits;
	bs_string = copyFrom.bs_string;
}

std::string Bitstring::get() {
	return bs_string;
}

void Bitstring::set(int value) {
	bs_string = intToString(value);
}

void Bitstring::resize(unsigned int bits) {
	//TODO: Implement this!
	std::cerr << "STUB. resize() not implemented" << std::endl;
}

bool isEqual(const Bitstring& bs1, const Bitstring& bs2) {
	//todo: consider if 000101 should be true
	return ((bs1.bs_numbits == bs2.bs_numbits)&& (bs1.bs_string == bs2.bs_string));
}
