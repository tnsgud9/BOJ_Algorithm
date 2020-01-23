// 이 문제는 LIS(최장 증가 수열)로 해결 할 수 있다.

#include <iostream>
#include <vector>


using namespace std;
int main()
{
	//input
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> dp(n , 2147483647);//결과는 여기다.
	for (int i = 0; i < n; i++) cin >> arr[i];


	//LIS ↓ 내가 좋아하는거 같으면서 정말 개 ㅁㅡㅇ라리ㅏㄴㅁ울;ㅣ만울...
	dp[0] = arr[0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++)
		{
			if (arr[i] <= dp[j])
			{
				dp[j] = arr[i];
				break;
			}

		}

	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (dp[i] == 2147483647) break;
		else cnt++;

	cout << cnt;
}