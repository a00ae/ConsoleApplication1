#include <iostream>

using namespace std;


class Company {
public:
	int id;
	string name;
	float salary;

	void seva(int i, string n, float sal)
	{
		id = i;
		name = n;
		salary = sal;

	}


	void display()
	{
		cout << id << " " << name << " " << salary << endl;
	}

};
int main()
{
	Company obj1;
	obj1.seva(1, "ahmed", 1200.1);

	obj1.display();

};