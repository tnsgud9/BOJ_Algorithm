//���� 9663�� n queen �˰���

#include <stdio.h>
#define N 10

using namespace std;

int n;
int arr[N][N];
int check1[N]; //�������� ������� �ε��� �迭�� queen(1)�� �ִ��� Ȯ���Ѵ�.
int check2[N*2]; //�ε��� �迭 ���� ���ο� queen(1)�� �ִ��� Ȯ���Ѵ�.
int check3[N*2]; //-������ ���� ������ +N �� �ȴ�. �� ������ ���� �ǹ�.
void queen(int y, int x)
{
	int i;
	//���� ���� 
	if (check1[y] == 1) return; //������� �� ���ư���.
	if (check2[x + y] == 1) return;
	if (check3[x - y + n] == 1) return;
	 
	for(i=1;i)
}


int main()
{

}