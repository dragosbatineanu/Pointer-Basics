#include <iostream>

#include "Header.h"

using namespace std;

void pointerManipulation(int num) {

	int* ptr = &num;
	//value of the integer using the variable itself
	cout << "Value of our variable:" << " " << num << endl;
	//value of the integer using the pointer
	cout << "Value of our variable using a pointer:" << " " << *ptr << endl;
	//address of the integer variable
	cout << "Address of the integer variable:" << " " << &num << endl;
	//address of the pointer stored
	cout << "Address stored in the pointer:" << " " << ptr << endl;
	//Modifying the value of the integer value using the pointer
	*ptr = num + 1;
	//Printing the value using the variable
	cout << "Printing the value using the variable:" << " " << num << endl;
	//Printing the value using the pointer
	cout << "Modified value of the integer value using the pointer:" << " " << *ptr << endl;
}