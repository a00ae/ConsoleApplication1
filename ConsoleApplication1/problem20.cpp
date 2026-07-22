#include <iostream>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;

int randomNumber(int from, int to) {

	int randNum = rand() % (to - from + 1) + from;

	return randNum;
}




enum enCharType {
	lowerCase = 1,
	UpperCase = 2,
	SpecialCharacter = 3,
	Digit = 4,
};


char getRandomCharacter(enCharType charType) {
	//شرط الحالات الاربعة
	switch (charType) {
		// حالة الاحرف الصغيرة
		case enCharType::lowerCase: {
			return char(randomNumber(97, 122));
			break;
		}
		// حالة الاحرف الكبيرة
		case enCharType::UpperCase: {
			return char(randomNumber(65, 90));
			break;

		}
		// حالة العلامات
		case enCharType::SpecialCharacter: {
			return char(randomNumber(33, 47));
			break;
		}
		// حالة الارقام
		case enCharType::Digit: {
			return char(randomNumber(48, 57));
			break;
		}


	}
	// في حال عدم تحقق الشروط ارجع قيمة فارغة
			return '\0';
}




void problem20() {



	srand((unsigned)time(NULL));


	// استدعي + اطبع

	// الاحرف الصغيرة
	cout << getRandomCharacter(enCharType::lowerCase) << endl;
	// الاحرف الكبيرة
	cout << getRandomCharacter(enCharType::UpperCase) << endl;
	// العلامات والاقتباسات
	cout << getRandomCharacter(enCharType::SpecialCharacter) << endl;
	// الارقام
	cout << getRandomCharacter(enCharType::Digit) << endl;


}