/*
#include <iostream>
#include <vector>
using namespace std;


vector<int> dp;

int min(int a, int b) {
	return a > b ? b : a;
}


int main()
{
	int n; 
	cin >> n;
	dp.resize(n+1);
	// 1~n
	for (int i = 1; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1; //작은거 부터 비교대상
		if (n % 3 == 0) // 홀
			dp[i] = min(dp[i], dp[n / 3] + 1);
		if (n % 2 == 0) // 짝
			dp[i] = min(dp[i], dp[n / 2] + 1);
	}
	
	cout << dp[n-1];
}

*/

#include <iostream>
#include <vector>
using namespace std;
int re = 0;
int n;
vector<int> check;
int one(int n , int count)
{
	if (check[n] == 1) return n;

	if (n == 1)
	{
		
		check[n] = 1;
		return re = count;
	}
	if(n % 2 == 0){
		check[n] = 1;
		return one(n / 2, count + 1);
	
	}
	if (n % 3 == 0) {
		check[n] = 1;
		return one(n / 3, count + 1);
			
	}
}

int main()
{
	cin >> n;
	check.resize(n,0);
	one(n,0);

}