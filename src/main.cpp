#include <iostream>
#include "Header.h"

using namespace std;

int main() {

	//Declaration of variables and the pointer
	int num = 10;
	int* ptr = &num;

	//User input
	cout << "Enter the value:" << endl;
	cin >> num;

	//pointerManipulation.cpp explains this function where we manipulate
	pointerManipulation(num);
}