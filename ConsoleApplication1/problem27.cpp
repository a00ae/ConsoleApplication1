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
	// تعريف متغير لحفظ القيمة وادراج قيمة اولية 0
	int sum = 0;
	// عمل حلقة تكرارية على العناصر المخزنة في الذاكرة
	for (int i = 0; i < arrLength; i++) {
		// اضافة القيم المخزنة الى متغير
		sum += arr[i];
	}
	// ارجع قيمة المتغير
	return sum;
}
// اضافة دالة لحساب متوسط القيم
float avgNumber(int arr[100], int arrLength) {
	//من خلال امر واحد ارجاع عدد غير صحيح مجموع العملية الحسابية السابقة قسمة عدد العناصر 
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
