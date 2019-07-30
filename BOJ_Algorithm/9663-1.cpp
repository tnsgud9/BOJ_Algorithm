#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 10
int n, arr[N][N];
int check1[N], check2[N * 2], check3[N * 2];
int cnt = 0;
void queen(int y, int x) {
	int i;

	//3���� ���� 
	//3����  check �迭�� �̿��� 3���� ������ ������ ������ �� �ִ�.
	//�ݺ����� ���� ��ǥ �ϳ��ϳ� �˻����� ���� check�迭�� �̿��Ͽ� �˻��Ѵ�.
	//3���� ���ǿ��� ���� �� ��� �� ����Լ��� ���⼭ �ߴܵȴ�.

	if (check1[x] == 1) return; //���θ� �������� �˻�ȴ�.
	if (check2[y + x] == 1)return; //������ �밢���� �˻��Ѵ�.
	if (check3[y - x + n] == 1) return; //���� �밢���� �˻��Ѵ�.

	//�� 3������ �ش��� ���� ���� ��� arr�迭�� check 1~3�迭�� üũ(1) ���� �ִ´�.
	arr[y][x] = 1;
	check1[x] = 1;
	check2[y + x] = 1;
	check3[y - x + n] = 1;

	//queen�� y�� n���� ������ 
	//�� ������ ���� ��쿡�� ��� queen�� ��ġ�� �ʴ� ����� ���̴�.
	if (y == n) {
		cnt++;
		arr[y][x] = 0;
		check1[x] = 0;
		check2[y + x] = 0;
		check3[y - x + n] = 0;
		return;
	}

	//i�� x��ǥ�� ����Ű�� n ��ŭ �ݺ��ϰ� y+1 y��ǥ�� ����Լ��� �����Ѵ�.
	for (i = 1; i <= n; i++) {
		queen(y + 1, i); //����Լ��� ����Ǿ� �ش� ��Ͱ� ������ ���� ���� �ٷ� ���� �ʴ´�.
	}


	//if (y == n)���� ������ �ǰ� �� ����Լ����� ������ �� 
	//�� �������� ���� ��� arr�� check 1~3�迭�� �ڸ��� ����ش�. 
	arr[y][x] = 0;
	check1[x] = 0;
	check2[y + x] = 0;
	check3[y - x + n] = 0;
	return;
}
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		queen(1, i);
	}
	printf("%d", cnt);
	return 0;
}


/*

//���� 9663�� n queen �˰���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 20

using namespace std;


int n;
int arr[N][N];
int check1[N], check2[N * 2], check3[N * 2];

int cnt = 0;
void queen(int x, int y)
{
	int i;
	if (check1[x] == 1) return;
	if (check2[y + x] == 1)return;
	if (check3[y - x + n] == 1) return;

	arr[y][x] = 1;
	check1[x] = 1;
	check2[y + x] = 1;
	check3[y - x + n] = 1;
	if (y == n)
	{
		cnt++;
		//���
		arr[y][x] = 0; //�� ��ġ�� ���� ����.
		check1[x] = 0;
		check2[y + x] = 0;
		check3[y - x + n] = 0;
		return;
	}

	for (i = 1; i <= n; i++)
	{
		queen(i, y + 1);

	}

}

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		queen(1, i);
	}

	printf("%d", cnt);
}



*/