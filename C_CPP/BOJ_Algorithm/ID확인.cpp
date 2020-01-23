#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main()
{

	freopen("input.txt", "r", stdin);
	int gol = 0;
	int N;
	cin >> N;
	vector<string> arr(N);
	for (int i = 0; i < N; i++) cin >> arr[i];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < arr[i].length(); j++)
		{
			if (arr[i][j] == '@') {
				gol++;
			}
			if (arr[i][j] >= 30 && arr[i][j] <= 39  || arr[i][j] >=65  && arr[i][j] <= 90 || arr[i][j] == '.' || arr[i][j] == '_')
			{	}
			else { cout << "No"; break; }
			
		}
		if (gol == 1) cout << "Yes";
		else cout << "No";
	}

}