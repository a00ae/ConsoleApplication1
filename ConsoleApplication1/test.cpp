#include <iostream>
using namespace std;

void printTableHeader() 
{
	cout << "\n\n\t\t\t Multiplicaton Table form 1 to 10 \n\n";

	cout << "\t";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n___________________________________________________________________________________\n";

}
string colmunSperatour(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
		
}
void printMultiplicatonTable() {
	printTableHeader();
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i  << colmunSperatour(i)<< "\t";

		for (int j = 1; j <= 10; j++) {
			cout <<  i * j << "\t";
		}
		cout << "\n";
	}
}

void test() {
	printMultiplicatonTable();

 }