#include <iostream>
using namespace std;
/* Problem #13 */

// get Number Positive 
int getNumberPostive(string message) {
	int number;

	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}
// طباعة الشكل التالي

/*
	55555
	4444
	333
	22
	1
*/


void printNumberPattrrn(int number) {

	for(int i = 1; i <= number; i++) {

		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

void problem13() {
	printNumberPattrrn(getNumberPostive("Please enter a positive number:"));
} 