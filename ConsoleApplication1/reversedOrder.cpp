//#include <iostream>
//using namespace std;
//
//int redNumberPositive(string message) {
//	int number;
//	do {
//		cout << message << endl;
//		cin >> number;
//	} while (number <= 0);
//
//	return number;
//}
//
//int printDigits(short n2, int number)
//{
//	/************** problem 6 ***************/
//	//int sum = 0;
//	//int res = readNum2();
//	int remainder = 0;
//	/************** problem 7 ***************/
//	//int number2 = 0;
//	/************** problem 8 ***************/
//	int res = 0;
//
//	while (number > 0) {		
//		remainder = number % 10; //Accessing the units digit
//		number = number / 10; //Removing the units digit
//		/************** problem 8 ***************/
//		if (remainder == n2) {
//			res++;
//
//		}
//
//
//
//		//number2 = number2 * 10 + remainder; 
//		/************** problem 5 ***************/
//		//cout << remainder << endl;
//		/************** problem 6 ***************/
//		//sum += remainder;
//		/************** problem 7 ***************/
//		// هذه عملية اللوب توضح لك ماحدث خلف الكواليس
//		// input => 1234 
//		//1234 % 10 = 4 remainder
//		//4 
//		// 1234 / 10 = 123 number
//		//123*
//		// number2 = 0 * 10 0 + 4
//		// 0 * 10 0 + 4
//		// 4
//		// 3 
//		// 12**
//		// 4 * 10 + 3
//		// 43
//		// 2
//		// 1***
//		// 43 * 10 + 2
//		// 432  
//	}
//	/************** problem 6 ***************/
//	//return sum;
//	/************** problem 7 ***************/
//	//return number2
//	/************** problem 8 ***************/
//	return res;
//}
//
//
//void reversedOrder()
//{
//	/************** problem 8 ***************/
//	//حلي 
//	//short num2;
//	//int res = readNumberPositive("Plase a positive number");
//	//cout << "what serch number?" << endl;
//	//cin >> num2;
//	/************** problem 7 ***************/
//	//cout << "\nSum Of Digits = " << printDigits(num2, res) << "\n";
//
//	/************** problem 8 ***************/
//	//cout << "\nSum Of Digits = " << printDigits(num2, res) << "\n";
//	//printDigits(redNumberPositive("Plase a positive number"));
//
//	/************** problem 8 ***************/
//	//حل الاستاذ
//	// دالة اخذ الرقم الاول الموجب 
//	int number = redNumberPositive("Plase a positive number");
//
//	// دالة لاخذ الرقم الثاني والتحقق من كم عدد الارقام المتشابهة
//	short digitToCheck = redNumberPositive("please enter one digiht to check?");
//
//
//	cout << "\nDigiht " << digitToCheck << " Frequency is "
//		<< printDigits(digitToCheck, number) <<  " Time(s). \n";
//
//
//
//
//	
//}