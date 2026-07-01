

#include <iostream>
using namespace std;
class YT
{
public:
	string name;

	void printName(YT x)
	{
		cout << "Name: " << x.name << endl;
	}
	
};

struct Names {
	string name;
	int age;
};

void PrintfNames(Names n[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << "Name: " << n[i].name << endl;
		cout << "Age: " << n[i].age << endl;
	}
};

void Print(Names n[], int size)
{


	if (size > 0) {
		PrintfNames(n, size);
	}
	else {
		cout << "No names to print." << endl;
	}
}

int main()
{
	YT obj;
	obj.name = "John Doe";
	obj.printName(obj);


	int size;
	cout << "Enter the number of names to print: ";

	cin >> size;
	Names person[10];

	person[0].name = "Alice";
	person[0].age = 25;
	person[1].name = "Bob";
	person[1].age = 30;

	Print(person, size);





	return 0;




}
