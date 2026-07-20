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

	for (int i = 0; i <= text.length(); i++) {
		text[i] = char((int)text[i] + encryptionKey);
	}
	return text;
}

string decryptText(string text, short encryptionKey) {


	for (int i = 0; i <= text.length(); i++) {
		text[i] = char((int)text[i] - encryptionKey);
	}

	return text;
}




void problem18() {

	const short encryptionKey = 2;

	string  textAfterEncryption, textAfterDecryption;

	string text = readText();

	textAfterEncryption = encryptText(text, encryptionKey);

	textAfterDecryption = decryptText(textAfterEncryption, encryptionKey);


	cout << "\nText Before Encryption : " << text << endl;
	// Display the encrypted text.
	cout << "Text After Encryption  : " << textAfterEncryption << endl;
	// Display the decrypted text.
	cout << "Text After Decryption  : " << textAfterDecryption << endl;


	
} 