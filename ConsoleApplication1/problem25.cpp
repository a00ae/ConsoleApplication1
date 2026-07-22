#include <iostream>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for time() to seed the random generator.

using namespace std;

/* 25 */

int randomNumbersMin(int from, int to) {


	int randNumber = rand() % (to - from + 1) + from;

	return randNumber;
}


void FillArrayWithRandomNumbersMin(int arr[100], int &arrLength) {

	cout << "\nEnter number of elements:\n";

	//by ref
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++) {
		arr[i] = randomNumbersMin(1, 100);
	}

}


void printNumbersMin(int arr[100], int arrLength) {

	cout << "\n";

	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}

	cout << "\n";




}


int minNumber(int arr[100], int arrLength) {
	int min = arr[0];

	for (int i = 0; i < arrLength; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	return min;
}


void problem25() {

	srand((unsigned)time(NULL));

	int array[100];
	int arrLength;

	FillArrayWithRandomNumbersMin(array, arrLength);

	cout << "\nArray Elements: ";
	printNumbersMin(array, arrLength);

	cout << "Min: " << minNumber(array, arrLength) << endl;

}
