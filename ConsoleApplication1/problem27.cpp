#include <iostream>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for time() to seed the random generator.

using namespace std;

/* Avrage */

int randomNumbersAvg(int from, int to) {


	int randNumber = rand() % (to - from + 1) + from;

	return randNumber;
}


void FillArrayWithRandomNumbersAvg(int arr[100], int& arrLength) {

	cout << "\nEnter number of elements:\n";

	//by ref
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++) {
		arr[i] = randomNumbersAvg(1, 100);
	}

}


void printNumbersAvg(int arr[100], int arrLength) {

	cout << "\n";

	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}

	cout << "\n";




}


int sumNumberAvg(int arr[100], int arrLength) {
	int sum = 0;

	for (int i = 0; i < arrLength; i++) {

		sum += arr[i];

	}

	return sum;
}

float avgNumber(int arr[100], int arrLength) {
	
	return (float)sumNumberAvg(arr, arrLength) / arrLength;
	
}


void problem27() {

	srand((unsigned)time(NULL));

	int array[100];
	int arrLength;

	FillArrayWithRandomNumbersAvg(array, arrLength);

	cout << "\nArray Elements: ";
	printNumbersAvg(array, arrLength);

	cout << "Avg: " << avgNumber(array, arrLength) << endl;

}
