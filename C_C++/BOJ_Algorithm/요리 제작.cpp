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

	int tmpCnt = 0;

	while (1)
	{
		if (arr1[i] >= arr2[i])
		{

			arr1[i] -= arr2[i]; //뺴버림
			if (i == N-1) //0번지 부터 받음
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