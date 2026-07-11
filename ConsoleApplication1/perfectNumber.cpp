#include <iostream>
using namespace std;

int readNumberPositive(string message)
{
	int length = 0;


	do {
		cout << message << endl;
		cin >> length;

	} while (length <= 0);

	return length;
}


bool isPerfctNumber(int n) {
	int sum = 0;

	for (int i = 1; i < n; i++) {
		if (n % i == 0)
		{
			sum += i;
		}
	}

	return sum == n;
}

void printPerfectNum(int n)
{
	if (isPerfctNumber(n)) {
		cout << n << " Is perfect Number" << endl;
	}
	else {
		cout << n << " Is Not perfect Number" << endl;
	}

}



void perfect() {
	printPerfectNum(readNumberPositive("Pleace a positive number?"));
}