#include <iostream>
using namespace std;
/* Problem #12 */

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
void printNumber(int number) {
	for (int i = number; i >= 0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			cout << i;
		}
		cout << endl;
	}
}

// حل الاستاذ

void printInvertedNumberPattrrn(int number) {

	cout << "\n";

	for (int i = number; i >= 1; i--) {

		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << "\n";
	}

	cout << "\n";
}
void problem12() {
	printInvertedNumberPattrrn(getNumberPostive("Please enter a positive number:"));
}