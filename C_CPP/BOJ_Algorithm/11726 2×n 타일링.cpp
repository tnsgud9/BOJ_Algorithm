//���� 11726�� ����
// 2xn Ÿ�ϸ�
//https://boj.kr/11726

#include <iostream>
#include <vector>

using namespace std;

int arr[1001];
// ������ȹ�� ���̳��� ���α׷��� DP�� �̿��� ����
// ��ȭ���� �̿��Ͽ� Ǯ�� �ִ�.
// ��ȭ�� d[n] =  d[n-1] + d[n-2];
// 
// 

int dp(int n)
{
	if (n == 1) return 1; //
	if (n == 2) return 2; //
	if (arr[n] != 0) return arr[n]; //�θ� ��ͷ� �� ��ȯ
	return arr[n] = dp(n - 1) + dp(n - 2); //�ش� ������ ����
}

int main()
{
	int n;
	cin >> n;
	cout << dp(n);
}
