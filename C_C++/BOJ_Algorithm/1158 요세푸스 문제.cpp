#include <iostream>
#include <list>
#include <queue>

using namespace std;


int main()
{
	list<int> lt;

	list<int> ::iterator iter;

	
	queue<int> const_que;
	int n , k;
	cin >> n, k;


	for (int i = 1; i <= n; i++) lt.push_back(i);
	int count = 0;
	cout << lt.size();
	while (!lt.empty())
	{
		for (iter = lt.begin(); iter !=lt.end(); iter++)
		{
			if (count == 3) {
				cout << *iter << endl;
				//const_que.push(*iter);
				lt.erase(iter);
				count = 0;
			}
			else
				count++;
		}

	}
}