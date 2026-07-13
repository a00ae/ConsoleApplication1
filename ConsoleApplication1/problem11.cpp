//#include <iostream>
//using namespace std;
//
//int getNumberPositive(string message) {
//	int number;
//	do {
//		cout << message << endl;
//		cin >> number;
//	} while (number <= 0);
//
//	return number;
//}
//
//// Reverse Number 
//
//int reverseNumber(int number) {
//	int remainder = 0;
//	int num2 = 0;
//	while (number > 0) {
//		remainder = number % 10;
//		number = number / 10;
//		num2 = num2 * 10 + remainder;
//	}
//
//	return num2;
//}
//
//bool isPalindromeNumber(int number) {
//	//التحقق من المدخل اذا كان يسواي احر رقم 
//	return number == reverseNumber(number);
//}
//
//
//void problem11() {
//	if (isPalindromeNumber(getNumberPositive("Please enter a positive number:"))) {
//		cout << "\nYes , it is a Palindrome number" << endl;
//	}
//	else {
//		cout << "\nNo , it is Not a Palindrome number" << endl;
//	}
//}