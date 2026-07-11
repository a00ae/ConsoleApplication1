#include <iostream>
#include <vector> 
#include "store.h"

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

//class Company
//{
//	private: 
//		string name;
//		int salary;
//	public:
//		void setValue()
//		{
//			
//				cout << "enter your name? " << endl;
//				cin >> name;
//				cout << "enter your salary? " << endl;
//				cin >> salary;
//				
//
//		
//			
//
//
//		}
//
//		void print()
//		{
//			cout << "your name is " << name << endl;
//			cout << "your salary is " << salary << endl;
//		}
//		int result()
//		{
//			return salary;
//		}
//
//
//};

//class Cal
//{
//
//	private: 
//		int n1, n2;
//
//	public: 
//		Cal()
//		{
//
//
//			cout << "Enter the first number" << endl;
//			cin >> n1;
//
//
//
//			cout << "Enter the last number" << endl;
//			cin >> n2;
//
//
//		}
//
//		Cal(int x, int y)
//		{
//			n1 = x;
//			n2 = y;
//		}
//		int sum()
//		{
//			return n1 + n2;
//		}
//		float divide()
//		{
//			return (double)n1 / (double)n2;
//		}
//		int mod()
//		{
//			return n1 % n2;
//		}
//		int mult()
//		{
//			return n1 * n2;
//		}
//
//};




//friend function
//
//class Cal {
//	private:
//		int x, y;
//	public:
//		//constrctour
//
//
//		Cal();
//		~Cal()
//		{
//			cout << "bay" << endl;
//		}
//		int sum();
//};
//Cal::Cal()
//{
//	x = 20;
//	y = 10;
//};
//
//
////
//int Cal::sum()
//{
//	return x + y;
//}


//class Stu
//{
//private:
//	string name;
//	int mark;
//public:
//	Stu(string n, int m)
//	{
//		name = n;
//		mark = m;
//	}
//	void print();
//
//	friend void show(Stu ob1);
//
//};
//
//void Stu::print() {
//	cout << "enter is number " << endl;
//}
//
//void show(Stu ob1)
//{
//	cout << "mark is " << ob1.mark << endl;
//}

//class Student
//{
//private:
//	string name;
//	int mark;
//
//public:
//	Student()
//	{
//		cout << "whit is your name? " << name <<  endl;
//		cin >> name;
//
//		cout << "whit is your mark? " << mark << endl;
//		cin >> mark;
//	}
//	Student(string n, int m)
//	{
//		name = n;
//		mark = m;
//
//	}
//	friend void sum(Student ob1, Student ob2, Student ob3);
//	
//
//
//		int checkMark(Student ob1, Student ob2, Student ob3)
//		{
//			Student highest = ob1;
//
//
//			if (highest.mark < ob2.mark)
//			{
//				highest = ob2;
//			}
//			if (highest.mark < ob3.mark)
//			{
//				highest = ob3;
//			}
//
//			cout << "name: " << highest.name << endl;
//			cout << "mark: " << highest.mark << endl;
//
//
//			return highest.mark;
//		}
//	
//};
//
//void sum(Student ob1, Student ob2, Student ob3)
//{
//	int sum = ob1.mark + ob2.mark + ob3.mark;
//	cout << "the sum of the marks" << sum << endl;
//}

//class My {
//private:
//	int x;
//public:
//	My(int a)
//	{
//		x = a;
//		cout << x << "\n";
//		cout << "Im first constrctour \n";
//
//	}
//	void setVal()
//	{
//		x = 20;
//	}
//	void print()
//	{
//		cout << "x: " << x << endl;
//	}
//};
//
//
//class St : public My {
//private:
//	int y;
//public:
//
//	St(int b, int a):My(a)
//	{
//		y = b;
//		cout << y << endl;
//		cout << "Im scund contrctour" << endl;
//	}
//};
//
//class First {
//	public:
//		int x;
//};



int main()
{
	//Circle area;
	//area.setValue();
	//area.printArea();

	//Company ob1;
	//Company ob2;
	//set
	//ob1.setValue();
	//ob2.setValue();

	////print
	//ob1.print();
	//ob2.print();

	//int res = ob1.result() + ob2.result();

	//cout << "result: " << res << endl;


	//cal

	//Cal cal;
	//cal.~Cal();
	//cout << cal.sum() << endl;
	//cout<< "sum: " << cal.sum() << endl;
	//cout<< "divide: " << cal.divide() << endl;
	//cout<< "mod: " << cal.mod() << endl;
	//cout<< "mult: " << cal.mult() << endl;



	//friend

	//Stu st("ahmed", 100);
	//st.print();
	//show(st);

	//Student ob1("ahmed", 100);
	//Student ob2("ali", 80);
	//Student ob3("nur", 40);

	//sum(ob1, ob2, ob3);
	//cout << endl;
	//ob1.checkMark(ob1, ob2, ob3);

	//St ob1(10, 12);

	//DiscountedProduct ob1;

	//int number;

	//cout << "what your add car number ?" << endl;
	//cin >> number;




	//vector<DiscountedProduct> productList;

	//DiscountedProduct productHelper;

	////productHelper.addProduct(productList, number);

	//for (int i = 0; i < productList.size(); i++) {
	//	productList[i].print();
	//}


	//store();
	// 1 #propleam
	//test();
	// 2 #propleam
	//prime();
	 //3 #propleam
	//perfect();
	//4 propleam
	primeAndpervect();
	return 0;


	

	
	 



	

};