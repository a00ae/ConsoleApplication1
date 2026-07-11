#include <iostream>
using namespace std;

int readPositiveNumber(string m)
{
	int num = 0;
	do {
		cout << m << endl;
		cin >> num;
	} while (num <= 0);

	return num;
}
bool isPerveectNumber(int number)
{
	int sum = 0;

	for (int i = 1; i < number; i++) {
		if (number % i == 0) {
			sum += i;
		}
	}

	return number == sum;

}

void PrintRedPrime(int n)
{
	for (int i = 1; i <= n; i++) {
		if (isPerveectNumber(i)) 
		{
			cout << i << endl;
		}
	}
}


void primeAndpervect()
{
	PrintRedPrime(readPositiveNumber("Please a positive number?"));
}