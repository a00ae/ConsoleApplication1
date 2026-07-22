#include <iostream>


using namespace std;


int readPositiveNum(string m ) {

	int num;

	do {
		cout << m << endl;
		cin >> num;
	} while (num <= 0);

	return num;

}

void readArray(int arr[100], int& arrLength) {
	cout << "\nEnter number of elements:\n";

	cin >> arrLength;

	cout << "\nEnter array elements: \n";
	for (int i = 0; i < arrLength; i++) {

		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
		

	}
	cout << endl;
}

void printArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


int timesRepeated(int number, int arr[100], int arrLength) {
	//timis
	int count = 0;  // Initialize a counter to zero.
	// Loop through the array indices from 0 to arrLength - 1.
	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (number == arr[i])  // If the current element equals the number we're checking,
		{
			count++;  // Increment the counter.
		}
	}
	return count;
}

void problem22() {

	int arr[100];      // Declare an array to hold up to 100 integers.
	int arrLength;     // Variable to store the number of elements in the array.
	int NumberToCheck; // The number whose frequency will be checked in the array.

	// Read array elements from the user.
	readArray(arr, arrLength);

	// Prompt the user to enter the number for which frequency is to be checked.
	NumberToCheck = readPositiveNum("Enter the number you want to check: ");

	// Display the original array.
	cout << "\nOriginal array: ";
	printArray(arr, arrLength);

	// Display the frequency count for the specified number.
	cout << "\nNumber " << NumberToCheck;
	cout << " is repeated ";
	cout << timesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";
}