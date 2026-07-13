//#include <iostream>
//using namespace std;
//
//
////get number positive
//int getNumber(string m) {
//	int number;
//	do {
//		cout << m << endl;
//		cin >> number;
//	} while (number <= 0);
//
//	return number;
//}
//
//
//// return number value
//int printOredr(int number) {
//	int remainder = 0;
//	int num2 = 0;
//	while (number > 0) {
//		remainder = number % 10;
//		number = number / 10;
//		num2 = num2 * 10 + remainder;
//
//
//	}
//
//	// Return only the duplicate numbers.
//	//return remainder;
//
//	return num2;
//
//}
//// print number 
//void printDigit(int number)
//{
//	int remainder = 0;
//	while (number > 0) {
//		remainder = number % 10;
//		number = number / 10;
//		cout << remainder;
//	}
//}
//
//void problem10()
//{
//	printDigit(printOredr(getNumber("Please enter a positive number:"))) ;
//}