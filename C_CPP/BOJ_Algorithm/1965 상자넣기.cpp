// �� ������ LIS(���� ���� ����)�� �ذ� �� �� �ִ�.

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
	vector<int> dp(n , 2147483647);//����� �����.
	for (int i = 0; i < n; i++) cin >> arr[i];


	//LIS �� ���� �����ϴ°� �����鼭 ���� �� ���Ѥ��󸮤�������;�Ӹ���...
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