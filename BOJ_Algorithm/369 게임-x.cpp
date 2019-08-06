#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>


using namespace std;

int main()
{
	string  A, B;
	string cnt="0";
	cin >> A >> B;
	int tmp;
	string tmpB = B;
	int length=1;

	while (stoi(A) != stoi(B) + 1)
	{
		string tmp = to_string(stoi(A) % 10);
		if (stoi(tmp) % 3 == 0 || stoi(tmp) % 6 == 0 || stoi(tmp) % 9 == 0 )   	cnt = to_string(stoi(cnt) + 1);
		tmp = to_string(stoi(A) / 10);
		if (stoi(tmp) % 3 == 0 || stoi(tmp) % 6 == 0 || stoi(tmp) % 9 == 0)   	cnt = to_string(stoi(cnt) + 1);
		
		
		A = to_string(stoi(A) + 1);
	}



	cout << cnt;

}