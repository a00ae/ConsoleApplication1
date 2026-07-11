#include <iostream>
using namespace std;
enum  enPrimeNum {Prime = 1, NotPrime = 2};

int ReadNumberPrime(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	}while(number <= 0);

	return number;

}

enPrimeNum CheckPrime(int x)
{
	int m = round(x / 2);

	for (int counter = 2; counter <= m; counter++)
	{
		if (x % counter == 0)
			return enPrimeNum::NotPrime;

	}
	return enPrimeNum::Prime;
}


void PrintPrime(int number)
{
	cout << "\n";

	cout << "Prime numbers from " << 1 << " To " << number;
	cout << " are : " << endl; 

	for (int i = 1; i <= number; i++)
	{
		if (CheckPrime(i) == enPrimeNum::Prime)
		{
			cout << i << endl;
		}
	}
}

void prime()
{
	PrintPrime(ReadNumberPrime("enter your number"));
}