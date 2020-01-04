#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;



int main()
{
	freopen("input.txt", "r", stdin);
	int count;
	stack<int> sta;
	cin >> count;

	string words;
	getline(cin, words);
	for (int i = 0; i < count; i++)
	{
		string words;

		cin >> words;

		if (words == "push")
		{
			int tmp;
			cin >> tmp;
			sta.push(tmp);
		}
		if (words == "pop")
		{
			if (!sta.empty()) {
				cout << sta.top() << "\n";
				sta.pop();
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		if (words == "top")
		{
			if (sta.empty()) cout << -1 << "\n";
			else cout << sta.top() << "\n";
		}
		if (words == "size")
		{
			cout << sta.size() << "\n";
		}
		if (words == "empty")
		{
			cout << sta.empty() << "\n";
		}
	}
	

}