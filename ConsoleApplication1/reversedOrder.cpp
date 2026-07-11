#include <iostream>
using namespace std;

int redNumberPositive(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}


void printDigits(int number)
{
	int remainder = 0;
	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}
void reversedOrder()
{
	printDigits(redNumberPositive("Plase a positive number"));
}