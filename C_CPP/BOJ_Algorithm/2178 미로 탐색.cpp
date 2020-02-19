#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> map;

vector<vector<int>> dist;
int N, M;
int minWay= 2147483647;

void BFS(int y, int x, int cnt) {



	if (y == N && x == M) {
		if (minWay > cnt)
			minWay = cnt;
		return;
	}

	if (map[y][x] == 0) return; //잘못갈떄

	if (dist[y][x] > cnt) return;

	if (map[y][x] == 1) {
		dist[y][x] = cnt;
		map[y][x] = 0;
		BFS(y - 1, x, cnt + 1);
		BFS(y, x + 1, cnt + 1);
		BFS(y + 1, x, cnt + 1);
		BFS(y, x - 1, cnt + 1);
		return;
	}

}

int main()
{
	freopen("input.txt", "r", stdin);
	cin >> N >> M;

	map.resize(N+2, vector<int>(M+2,0)); //따로 Out of Range 처리하기 귀찮음.
	dist.resize(N + 2, vector<int>(M + 2, 2147483647)); //따로 Out of Range 처리하기 귀찮음.


	//i = y    j = x;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	BFS(1,1,1);

	cout << minWay;
}