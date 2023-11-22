/*****************************************************************//**
 * \file   Main.cpp
 * \brief  TESTING file for the Bitstring Class
 * 
 * \author s0553644
 * \date   November 2023
 *********************************************************************/
#include <iostream>
#include "Bitstring.h"

using namespace std;

int main() {

	//test the constructors
	Bitstring bValue1;					//default constructor
	Bitstring bValue2(42);				//constructor value = 42, bits = 32
	Bitstring bValue3(255, 16);			//constructor value = 42, bits = 12
	Bitstring bValue4(bValue3);			//copy constructor

	//test .get() and validate the constructors

	cout << "bValue 1 should be 00000000000000000000000000000000: " << bValue1.get() << endl;
	cout << "bValue 2 should be 00000000000000000000000000101010: " << bValue2.get() << endl;
	cout << "bValue 3 should be 0000000011111111: " << bValue3.get() << endl;
	cout << "bValue 4 should be 0000000011111111: " << bValue4.get() << endl;

	//test .set() 
	bValue1.set(65535); // 1111111111111111
	cout << "bValue 3 should be 1111111111111111: " << bValue3.get() << endl;

	//test .resize()
	bValue1.resize(16);
	cout << "bValue 2 should be 0000000000000000: " << bValue1.get() << endl;

	//test isEqual();
	cout << "bValue1 == bValue4: ";
	if (isEqual(bValue1, bValue4)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	cout << "bValue3 == bValue4: ";
	if (isEqual(bValue3, bValue4)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	return 0;
}
