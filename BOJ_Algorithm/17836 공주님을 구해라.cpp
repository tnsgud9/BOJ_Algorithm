#include <iostream>
#include <vector>

using namespace std;

vector <vector<int>> map;
// map[Y][X] ;
int X, Y , T;

int t = 0;
int min=987654321;
void playerBFS(int y, int x, int sw, int t);

int main()
{
	//freopen("input.txt", "r", stdin);


	cin >> Y >> X >> T;
	
	map.resize(Y, vector<int>(X));

	for (int i = 0; i < Y; i++)
	{
		for (int j = 0; j < X; j++)
		{
			cin >> map[i][j];
		}
	}

	//playerBFS(0,0,0,0);

	
}

void BFS(int y, int x, int sw, int t)
{

	if (x < 0 || y < 0 || x >= X || y >= Y)  return;
}


/*
void playerBFS(int y, int x , int sw , int t)
{

	if (x < 0 || y < 0 || x >= X || y >= Y)  return;
	if (x == X - 1 && y == Y - 1)
	{
		cout << "done!";
		if (min >= t) min = t;
		return;
	}
	if (t > T)
	{
		//cout << "Failed!";   // 수정 필요
		return;
	}
	t++;
	
	if (map[y][x] == 0)
	{
		playerBFS(y, x + 1, sw, t);
		playerBFS(y + 1, x, sw, t);
		playerBFS(y, x - 1, sw, t);
		playerBFS(y - 1, x, sw, t);
	}

	if (map[y][x] == 1)
	{


		if (sw > 0)
		{
			sw--;

			playerBFS(y, x + 1, sw, t);
			playerBFS(y + 1, x, sw, t);
			playerBFS(y, x - 1, sw, t);
			playerBFS(y - 1, x, sw, t);

		}
		else
			return;
	}

	if (map[y][x] == 2)
	{
		sw++;

		playerBFS(y, x + 1, sw, t);
		playerBFS(y + 1, x, sw, t);
		playerBFS(y, x - 1, sw, t);
		playerBFS(y - 1, x, sw, t);

	}
	*/
