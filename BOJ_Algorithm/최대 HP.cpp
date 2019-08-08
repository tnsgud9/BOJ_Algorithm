#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int H, T;
	cin >> H >> T;
	int HMax;
	int h;
	string a; 
	for (int i = 0; i < T; i++)
	{
		cin >> a >> h;
		a += 'h';
		if (a == "1h")	H -= h;
		if (a == "2h") H += h;
		if (a == "3h") HMax = H + h;

	}
	cout << HMax;
}
