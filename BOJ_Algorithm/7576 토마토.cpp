//https://www.acmicpc.net/problem/7576
#include <iostream>
#include <vector>
using namespace std;


int w, h;
//1 ������
//0 ����
//-1 �ȸ�.

vector<vector<int>> arr(w, vector<int>(h, 0));

void main()
{
	//freopen("input.txt", "r", stdin);
	cin >> w >> h;
	
#pragma region input
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> arr[h][w];
		}
	}
#pragma endregion

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (arr[i][j] == 1)
			{
				//bfs �ߵ�!!!!

			}
		}
	}

}


void BFS(int y, int x, int count)
{           a 
ZS
S
	arr[y][x] = 1;

	if(y == )
}