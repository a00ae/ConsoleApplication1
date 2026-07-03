#include <iostream>

using namespace std;

class Company
{
	private: 
		string name;
		int id;
		int salary;

	public:
		void print()
		{
			cout << "**********************\n";
			cout << "name " << name << endl;
			cout << "id: " << id << endl;
			cout << "salay: " << salary << endl;
			cout << "**********************\n";
			cout << endl;

		}
		void setUser()
		{
			cout << "enter your name \n";
			cin >> name;
			cout << "enter your id \n";
			cin >> id;
			cout << "enter your salary \n";
			cin >> salary;

		}
};




int main()
{
	Company obj;
	
	obj.setUser();
	obj.print();

	//yt1.setUser();
	//yt1.print();
};