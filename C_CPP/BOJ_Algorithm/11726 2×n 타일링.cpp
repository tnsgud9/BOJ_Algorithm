//백준 11726번 문제
// 2xn 타일링
//https://boj.kr/11726

#include <iostream>
#include <vector>

using namespace std;

int arr[1001];
// 동적계획법 다이나믹 프로그래밍 DP를 이용한 문제
// 점화식을 이용하여 풀수 있다.
// 점화식 d[n] =  d[n-1] + d[n-2];
// 
// 

int dp(int n)
{
	if (n == 1) return 1; //
	if (n == 2) return 2; //
	if (arr[n] != 0) return arr[n]; //부모 재귀로 값 반환
	return arr[n] = dp(n - 1) + dp(n - 2); //해당 번지에 저장
}

int main()
{
	int n;
	cin >> n;
	cout << dp(n);
}
