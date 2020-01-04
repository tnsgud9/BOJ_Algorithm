#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;



int main()
{
	//freopen("input.txt", "r", stdin);
	int n;
	queue<int> que;
	cin >> n;

	string words;
	getline(cin, words);


	for (int i = 0; i < n; i++)
	{
		string words;
		cin >> words;

		if (words == "push")
		{
			int tmp;
			cin >> tmp;
			que.push(tmp);
		}

		if (words == "pop")
		{
			if (!que.empty()) {
				cout << que.front() << "\n";
				que.pop();
			}
			else
				cout << "-1" << "\n";
		}
		if (words == "size") cout << que.size() << '\n';

		if (words == "empty")
			if (que.empty()) cout << '1' << '\n';
			else cout << '0' << '\n';

		if (words == "front")
			if (que.empty()) cout << '-1' << '\n';
			else cout << que.front() << '\n';

		if (words == "back")
			if (que.empty()) cout << '-1' << '\n';
			else cout << que.back() << '\n';
	}
}