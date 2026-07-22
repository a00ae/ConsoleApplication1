#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for using std::string.
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for time() to seed the random generator.

using namespace std;


int randomNumberArray(int from, int to) {

	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}


void FillArrayWithRandomNumbers(int arr[100], int &arrLen) {
	
	cout << "Plase Enter Positve Number\n";

	cin >> arrLen;

	for (int i = 0; i < arrLen; i++) {

		arr[i] = randomNumberArray(1, 100);
	}


}


void printArrayRandomNumbers(int arr[100], int arrLen) {

	for (int i = 0; i <= arrLen - 1; i++)
		cout << arr[i] << " ";

	cout << "\n";
	
}



void problem23() {

	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";
	printArrayRandomNumbers(arr, arrLength);




}