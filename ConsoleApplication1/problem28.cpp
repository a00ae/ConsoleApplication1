#include <iostream>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>
/*	28	*/
using namespace std;

int readPositiveNumCopy(string m, int &num) {
	do {
		cout << "\n" << m << " " << endl;
		cin >> num;
	} while (num <= 0);

	return num;
}


int randomNumerCopy(int from, int to) {

	int randNum = rand() % (to - from + 1) + from;

	return randNum;
}

void readArrayCopy(int arr[100], int &lenArr) {

	int len = readPositiveNumCopy("whit your num?", lenArr);

	for (int i = 0; i < len; i++) {
		arr[i] = randomNumerCopy(1, 100);
	}

}

void printArrayCopy(int arr[100], int lenArr) {

	for (int i = 0; i < lenArr; i++) {
		cout << arr[i] << " ";
	}
}




void copyArray(int arrDestination[100], int arrSource[100], int lenArr) {
	
	for (int i = 0; i < lenArr; i++) {
		arrDestination[i] = arrSource[i];
	}

}
void problem28() {

	srand((unsigned)time(NULL));

	int array[100];
	int array2[100];
	int lenArray;

	readArrayCopy(array, lenArray);

	copyArray(array2, array, lenArray);

	cout << "\nArray Elements: ";
	printArrayCopy(array, lenArray);


	cout << "\nArray Elements (copy): ";
	printArrayCopy(array2, lenArray);





}