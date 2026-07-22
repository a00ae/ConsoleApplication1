#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for using std::string.
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for time() to seed the random generator.

using namespace std;




int randomNumberArrayMax(int from, int to) {

	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}


void FillArrayWithRandomNumbersMax(int arr[100], int& arrLen) {

	cout << "Plase Enter Positve Number\n";

	cin >> arrLen;

	for (int i = 0; i < arrLen; i++) {

		arr[i] = randomNumberArrayMax(1, 100);
	}


}


void printArrayRandomNumbersMax(int arr[100], int arrLen) {

	for (int i = 0; i <= arrLen - 1; i++)
		cout << arr[i] << " ";

	cout << "\n";

}




int maxNumberInArray(int arr[100], int& arrLen) {
	int max = 0;
	for (int i = 0; i < arrLen - 1; i++) {

		if (arr[i] > max) {
			max = arr[i];
		}

	}

	return max;
}

void problem24() {

	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbersMax(arr, arrLength);

	cout << "\nArray Elements: ";
	printArrayRandomNumbersMax(arr, arrLength);

	cout << "\n";


	cout << "Max Number: " << maxNumberInArray(arr, arrLength) << endl;


}