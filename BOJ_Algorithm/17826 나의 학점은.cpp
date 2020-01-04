#include <iostream>
#include <vector>

using namespace std;
int main()
{

	vector<int> arr;

	int score;

	for (int i = 0; i < 50; i++)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	cin >> score;

	int rank = 1;
	for(int i : arr)
	{
		if (score >= i)
			break;
		else
			rank++;
	}

	if (rank <= 5) { cout << "A+"; return 0; }
	if (rank <= 15) { cout << "A0"; return 0; }
	if (rank <= 30) { cout << "B+"; return 0; }
	if (rank <= 35) { cout << "B0"; return 0; }
	if (rank <= 45) { cout << "C+"; return 0; }
	if (rank <= 48) { cout << "C0"; return 0; }
	if (rank <= 50) { cout << "F"; return 0; }


}