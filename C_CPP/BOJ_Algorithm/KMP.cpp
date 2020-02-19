/*

KMP 알고리즘 (Kruth Morris Pratt algorithm)

*/
#include<iostream>
#include<vector>
#include<string>

using namespace std;

string Text;
string Pattern;

vector<int> sp;
void failedTable()
{
	sp[0] = 0;
	int j = 0;
	for (int i = 1; i < Text.length(); i++) {
		if (Text[i] == Text[j])
		{
			sp[i] =++j;
		}
		else
		{
			j = 0;
			if (Text[i] == Text[j]) {
				sp[i] = ++j;
			}
			sp[i] = j;
		}
	}
};

void KMP() {
	int i = 0;
	int j = 0;
	int jump = 0;
	for (int i = 0; i < Text.length(); i++)
	{
		if (Text[i] == Pattern[j])
		{

		}
		else
		{
			j = 0;
			i = i - sp[i - 1];
		}
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	cin >> Text;
	cin >> Pattern;

	sp.resize(Text.length(),0);

	failedTable();
	for(int i=0;i<sp.size();i++)
	cout << sp[i];

	//KMP();

	return 0;
}