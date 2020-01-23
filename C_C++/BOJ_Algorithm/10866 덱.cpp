#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	deque<int> deq;

	for (int i = 0; i < n; i++)
	{
		string word;
		int tmp;
		cin >> word;

		if (word == "pop_back")
		{
			if (deq.empty()) cout << "-1" << endl;
			else {
				cout << deq.back() << endl;
				deq.pop_back();
			}
		}
		if (word == "push_back")
		{
			cin >> tmp;
			deq.push_back(tmp);
		}


		if (word == "pop_front")
		{
			if (deq.empty()) cout << "-1" << endl;
			else {
				cout << deq.front() << endl;
				deq.pop_front();
			}
		}
		if (word == "push_front")
		{

			cin >> tmp;
			deq.push_front(tmp);
		}


		if (word == "front")
		{
			if (deq.empty()) cout << "-1" << endl;
			else {
				cout << deq.front() << endl;
			}
		}

		if (word == "back")
		{
			if (deq.empty()) cout << "-1" << endl;
			else {
				cout << deq.back() << endl;
			}
		}

		if (word == "size")
		{
			cout << deq.size() << endl;
		}

		if (word == "empty")
		{
			if (deq.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
	}
}