#include <iostream>

using namespace std;

class Youtube
{
	private: 
		string name;
		int videos;
		int sub;

	public:
		void print()
		{
			cout << "**********************\n";
			cout << "chinl " << name << endl;
			cout << "video: " << videos << endl;
			cout << "sub: " << sub << endl;
			cout << "**********************\n";
			cout << endl;
		}
		void set(string n, int vid, int sb)
		{
			name = n;
			videos = vid;
			sub = sb;

		}


};




int main()
{
	Youtube yt;
	Youtube yt1;
	yt.set("elzuro", 100, 20000);
	yt.print();

	yt1.set("etalm", 50, 23000);
	yt1.print();




};