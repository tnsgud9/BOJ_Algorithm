#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{

	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string words;
		cin >> words;
		stack<char> sta;

		for (int j = 0; j < words.length(); j++)
		{
			if (words.at(j) == '(')
				sta.push('(');
			if (words.at(j) == ')')
			{
				if (sta.empty())
				{

					sta.push('(');
					break;
				}
				else
					sta.pop();
			}
		}

		if (!sta.empty())
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";
	}


}
