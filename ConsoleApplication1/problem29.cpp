#include <iostream>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>
/*	29	*/
using namespace std;

// تعريف enum لكي نضمن الرقم بين قيمتين اذا كان الرقم يقسم على عدة اعداد
enum enPrimeNumber{prime=1 , notPrime=2};


// اخذ رقم موجب من المستخدم
int getPositiveNumberPrime(string m, int &len) {

	do {
		cout << m << " " << endl;
		cin >> len;
	} while (len <= 0);

	return len;
}

int randomNumberPrime(int from, int to) {

	int randomNum = rand() % (to - from + 1) + from;

	return randomNum;
}

enPrimeNumber checkPrimeNum(int num) {

	int n = round(num / 2);

	for (int counter = 2; counter <= n; counter++) {

		if (num % counter == 0) {
			return enPrimeNumber::notPrime;
		}
	}

	return enPrimeNumber::prime;
}

void readNumArrayPrime(int arr[100], int &lenArray) {

	int len = getPositiveNumberPrime("Please enter positive Number?", lenArray);

	for (int i = 0; i < len; i++) {
		arr[i] = randomNumberPrime(1, 100);
	}
}


void copyPrimeArrayNum(int arr1[100], int arr2[100], int lenArr1, int& lenArr2) {

	int counter = 0;

	for (int i = 0; i < lenArr1; i++) {

		if (checkPrimeNum(arr1[i]) == enPrimeNumber::prime) {

			arr2[counter] = arr1[i];
			counter++;
		}
	}

	lenArr2 = --counter;
}



void printArrayPrime(int arr[100], int lenArray) {

	for (int i = 0; i < lenArray; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


void problem29() {
	srand((unsigned)time(NULL));

	int arr[100];
	int lenArray;

	readNumArrayPrime(arr, lenArray);

	//Prime varble;
	int arrPrime[100];
	int lenArrayPrime = 0;

	copyPrimeArrayNum(arr, arrPrime, lenArray, lenArrayPrime);

	cout << "\nArray Elements: ";
	printArrayPrime(arr, lenArray);

	//print Prime varble

	cout << "Array Elements (Prime): ";
	printArrayPrime(arrPrime, lenArrayPrime);





}