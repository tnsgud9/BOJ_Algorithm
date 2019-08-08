// 트리의 높이와 너비
//중위 순회(Inorder Traversal)와 DFS(Depth First Search) 알고리즘을 이용한다.

#include <iostream>
#include <algorithm>
#include <vector>
#define N 10001

using namespace std;

int n;

int cnt = 1;
struct abc
{
	int left, right , level;
}node[N];


int Y[N]; //여기다 노드의 레벨을 저장한다.



void input()
{
	cin >> n;
	int a ,b ,c;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		node[a].left = b;
		node[a].right = c;
	}

}

void IT_DFS(int pos,int level)
{
	//중위 순회 + 재귀함수
	if (pos == -1) return;
	IT_DFS(node[pos].left,level+1);
	Y[cnt] = level; cnt++;
	IT_DFS(node[pos].right,level+1);

}


int main()
{
	freopen("input.txt", "r", stdin);
	input();
	IT_DFS(1,1); //입력을 인덱스 1부터 넣었으니 1부터 시작

	int length=0;
	int MAX = 0, LMAX=0;
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = n; i >= 0; j--)
		{
			if (Y[i] == Y[j]) break;
		}
		length = j - i +1;

		if (MAX <= length)
		{
			MAX = length;
			LMAX = Y[i];
		}

	}
	cout << LMAX <<" " << MAX;
}
