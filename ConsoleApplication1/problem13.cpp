#include <iostream>
using namespace std;
/* Problem #13 */

// get Number Positive 
int getNumberPostive(string message) {
	int number;

	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}
// طباعة الشكل التالي

/*
	55555
	4444
	333
	22
	1
*/
void printNumberPattrrn(int number) {

	for(int i = 1; i <= number; i++) {

		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

// حل الاستاذ

//void printInvertedNumberPattrrn(int number) {
//
//	cout << "\n";
//
//	for (int i = number; i >= 1; i--) {
//		// الفرق بين الحلين هو طريقة الطباعة
//		// في دالة الخاص بي ستطبع من اليمين الى اليسار <=
//		// في دالة الاستاذ ستطبع من اليسار الى اليمين	=>
//
//		// القيمة الاولية لدي مايدخله المستخدم اذا كان الرقم 5
//		for (int j = 1; j <= i; j++) {
//			cout << i;
//		}
//		cout << "\n";
//	}
//
//	cout << "\n";
//}
void problem13() {
	printNumberPattrrn(getNumberPostive("Please enter a positive number:"));
} 