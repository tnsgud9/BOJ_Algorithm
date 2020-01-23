// Ʈ���� ���̿� �ʺ�
//���� ��ȸ(Inorder Traversal)�� DFS(Depth First Search) �˰����� �̿��Ѵ�.

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


int Y[N]; //����� ����� ������ �����Ѵ�.



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
	//���� ��ȸ + ����Լ�
	if (pos == -1) return;
	IT_DFS(node[pos].left,level+1);
	Y[cnt] = level; cnt++;
	IT_DFS(node[pos].right,level+1);

}


int main()
{
	freopen("input.txt", "r", stdin);
	input();
	IT_DFS(1,1); //�Է��� �ε��� 1���� �־����� 1���� ����

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
