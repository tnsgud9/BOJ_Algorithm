#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("input.txt", "w", stdout);

	int stop, length;
	int cut=0;
	cin >> stop >> length;

	vector<string> arr;
	vector<string> check;

	for (int i = 0; i <length-cut; i++) {
		string in;
		cin >> in;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == in) {
				arr.erase(arr.begin()+j);
				cut++;
				break;
			}
		}

		arr.push_back(in);
	}

	for (int i = 0; i < 3; i++)
		cout << arr[i];

}
