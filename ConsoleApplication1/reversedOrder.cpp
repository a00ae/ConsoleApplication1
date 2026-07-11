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


int printDigits(int number)
{
	int sum = 0;
	int remainder = 0;
	while (number > 0) {		
		remainder = number % 10; //Accessing the units digit
		number = number / 10; //Removing the units digit
		sum += remainder;
	}
	return sum;
}
void reversedOrder()
{
	cout << printDigits(redNumberPositive("Plase a positive number")) ;
}