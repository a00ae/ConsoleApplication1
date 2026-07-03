#include <iostream>

using namespace std;

class Youtube
{
	private: 
		string name;
		int videos;
		int sub;

	public:
		void display(string n, int vid, int sb)
		{
			name = n;
			videos = vid;
			sub = sb;

		}
		void print()
		{
			cout << "chinl " << name << endl;
			cout << "video: " << videos << endl;
			cout << "sub: " << sub << endl;
		}

};


int main()
{
	Youtube yt;
	yt.display("elzuro", 100, 20000);
	yt.print();


};