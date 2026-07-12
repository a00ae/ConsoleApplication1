#include <iostream>
using namespace std;

/* probleam 9*/

//1
/* git number positive */
int gitNumPositive(string message)
{
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;

};
//2
/* Print the number verification request */
int comparingToNum2(short digitCheck, int number) {
	int remainder = 0;
	int freq = 0;
	while (number > 0) {
		remainder = number % 10; 
		number = number / 10;
		//If the input is equal to the number more than once
		if (digitCheck == remainder)
		{
			//Count this number for me.
			freq++;

		}
	}

	// Return only the duplicate numbers.
	return freq;

}

//3
/* Comparing the numbers */  
void printAllDigits(int number) {
	/*number = These are the numbers that the user entered. */
	cout << endl;
	/*i = It is a counter that counts numbers from 0 to 9.*/
	for (int i = 0; i < 10; i++) {
		//Declaration of a variable
		short digitFrequency = 0;
		//Save the numbers that are repeated more than once
		digitFrequency = comparingToNum2(i, number); 
		//If he has numbers more than once, print them as follows:
		if (digitFrequency > 0) {
			//i == counter
			cout << "Digit " << i << " Frequency is " 
				// digitFrequency == How many times was the number repeated
				<< digitFrequency << " Time(s).\n";
		}
	}
}


void frequency() {
	int number = gitNumPositive("Plase a positive number?");

	printAllDigits(number);
}