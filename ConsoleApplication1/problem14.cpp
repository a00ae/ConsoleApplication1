#include <iostream>
/*  Proplem #14 */ 
using namespace std;

//1- get number positive
int getNumberPositive(string message) {
	//تعريف متغير من نوع رقم صحيح
	int number;
	// نفذ الامر التالي لو مرة واحدة
	do {
		//اطبع للمستخدم الرسالة التي ستقوم بتمريرها
		cout << message << endl;
		//  اطلب من المستخدم رقم صحيح وقم بتخزينه لاعادة استخدامه
		cin >> number;
	} while (number <= 0); // في حال كان الرقم يساوي صفر او بالسالب لاتدعه يخرج حتى يضع رقم موجب
	// ارجع لي قمية الرقم لاعادة استخدامه
	return number;
}

// طباعة الحروف الكبيرة على شكل الهرمي
void printLettersUperCase(int number) { // استقبال قيمة رقمية
	// تكرر العمودي (column)
	//char letter = 'A';
	//int letterNum = (int)letter;
	//int text = 65;
	for (int i = 65 + number - 1; i >= 65; i--) {
		// تكرار الصفوف (row)
		for (int j = 1; j <= number - ((65 + number - 1) - i); j++) {
			cout << (char)i;
		}
		// اطبع سطر جديد
		cout << "\n";

	}
}

void problem14() {
	printLettersUperCase(getNumberPositive("Please enter a positive number:"));
}