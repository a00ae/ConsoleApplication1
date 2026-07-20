#include <iostream>
#include <string>

using namespace std;

string readPassword() {
	string password;
	cout << "Please enter a 3-Letter Password (all capital)?\n";
	cin >> password;
	return password;
}


bool GuessPassword(string originalPassword) {
	cout << "\n";
	//قيمة نصية
	string word = "";
	//العداد
	int counter = 0;

	cout << "\n"; 

	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {

			for (int z = 65; z <= 90; z++) {

				word = word + char(i);
				word = word + char(j);
				word = word + char(z);

				counter++;

				cout << "Trial [" << counter << "] " << word << endl;



				//cout << word << endl;
				if (word == originalPassword) {
					cout << "\nPassword is " << word << "\n";
					cout << "Found after " << counter << " Trial(s)\n";
					return true;
				};

				word = "";
			}
		}


		cout << "\n_________________________________________________\n";
	}

	return  false;
}

void problem17() {
	GuessPassword(readPassword());
}