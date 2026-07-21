#include <iostream>
#include <string>
using namespace std;

string readText() {
	string text;
	cout << "" << endl;
	getline(cin, text);

	return text;
}

string  encryptText(string text, short encryptionKey) {
	// نقوم بغلب الاحراف الى ارقم وتزويد رقمين اثنين على كل حرف
	for (int i = 0; i <= text.length(); i++) {
		text[i] = char((int)text[i] + encryptionKey);
	}
	return text;
}

string decryptText(string text, short encryptionKey) {

	// نقوم بغلب الاحراف الى ارقام وطرح الارقام التى قمنا باضفتها في الدالة السابقة 
	for (int i = 0; i <= text.length(); i++) {
		text[i] = char((int)text[i] - encryptionKey);
	}

	return text;
}




void problem18() {

	const short encryptionKey = 2;

	string  textAfterEncryption, textAfterDecryption;

	string text = readText();

	// هنا نضيف معاملين الاول النص الذ قمن باخذه من المستخدم والثاني العدد الذي قمنا بزويده
	textAfterEncryption = encryptText(text, encryptionKey);

	
	// هنا نعيد الاسم المزيف لكي يقو م بالطرح منه 
	textAfterDecryption = decryptText(textAfterEncryption, encryptionKey);


	cout << "\nText Before Encryption : " << text << endl;
	// Display the encrypted text.
	cout << "Text After Encryption  : " << textAfterEncryption << endl;
	// Display the decrypted text.
	cout << "Text After Decryption  : " << textAfterDecryption << endl;


	
} 