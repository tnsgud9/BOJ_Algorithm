#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N, K;
	int sw = 1;
	int x=0, y=1;
	int cnt = 1;
	cin >> N >> K;
	int n = N;
	vector<vector<int>> map(N+1, vector<int>(N+1));
	

	while (cnt != (N * N)+1)
	{
		for (int i = 1; i <= n; i++)
		{
			x += sw;
			map[y][x] = cnt++;
			
		}
		n--;
		for (int i = 1; i <= n; i++)
		{
			y += sw;
			map[y][x] = cnt++;
		}
		sw *= -1;
	}


	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			if (map[i][j] == K) { cout << j << " " << i; return 0; }
		}
	}
}