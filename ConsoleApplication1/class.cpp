#include <iostream>

using namespace std;

class Circle
{
	private: 
		double raduis;

	public:
		void printArea()
		{
			double area = raduis * raduis * 3.14 ;
			cout << "area of circle: "<< area << endl;

		}
		void setValue()
		{
			cout << "enter your circle raduis? " << endl;
			cin >> raduis;

		}

};




int main()
{
	Circle area;
	area.setValue();
	area.printArea();

};