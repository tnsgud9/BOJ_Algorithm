#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

int N=1;

using namespace std;
int main()
{

	freopen("input.txt", "r", stdin);
	cin >> N;

	vector<int> arr1(N);
	vector<int> arr2(N);
	int check = 0;

	int cnt = 0;

	for (int i = 0; i < N; i++) cin >> arr1[i];
	for (int i = 0; i < N; i++) cin >> arr2[i];

	int i = 0;
	while (1)
	{

		if (arr1[i] >= arr2[i])
		{
			arr1[i] -= arr2[i];
			if (i == N-1)
			{
				cnt++;
				i = 0;
			}
			i++;
		}
		else
			break;

	}

	cout << cnt;

	return 0;
}