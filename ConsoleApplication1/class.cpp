#include <iostream>

using namespace std;

//class Circle
//{
//	private: 
//		double raduis;
//
//	public:
//		void printArea()
//		{
//			double area = raduis * raduis * 3.14 ;
//			cout << "area of circle: "<< area << endl;
//
//		}
//		void setValue()
//		{
//			cout << "enter your circle raduis? " << endl;
//			cin >> raduis;
//
//		}
//
//};

class Company
{
	private: 
		string name;
		int salary;
	public:
		void setValue()
		{
			//int res;
			//cin >> res;
			//if (res >= 1) {
			//	for (int i = 0; i < res; i++) {
				cout << "enter your name? " << endl;
				cin >> name;
				cout << "enter your salary? " << endl;
				cin >> salary;
				//}

			//}
			//else {
			//	cout << "Sorry, you did not enter the correct entrance.";
			//}


		}

		void print()
		{
			cout << "your name is " << name << endl;
			cout << "your salary is " << salary << endl;
		}
		int result()
		{
			return salary;
		}


};







int main()
{
	//Circle area;
	//area.setValue();
	//area.printArea();

	Company ob1;
	Company ob2;
	//set
	ob1.setValue();
	ob2.setValue();

	//print
	ob1.print();
	ob2.print();

	int res = ob1.result() + ob2.result();

	cout << "result: " << res << endl;



	 



	

};