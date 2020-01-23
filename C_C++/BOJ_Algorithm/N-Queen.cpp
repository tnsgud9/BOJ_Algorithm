#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 10
int n, arr[N][N];
int check1[N], check2[N * 2], check3[N * 2];
int cnt = 0;
void queen(int y, int x) {
	int i;

	//3가지 조건 
	//3개의  check 배열을 이용해 3개의 조건의 빠르게 접근할 수 있다.
	//반복문을 통해 좌표 하나하나 검사하지 말고 check배열을 이용하여 검사한다.
	//3가지 조건에서 참이 될 경우 이 재귀함수는 여기서 중단된다.

	if (check1[x] == 1) return; //세로를 기준으로 검사된다.
	if (check2[y + x] == 1)return; //오른쪽 대각선을 검사한다.
	if (check3[y - x + n] == 1) return; //왼쪽 대각선을 검사한다.

	//위 3조건의 해당이 되지 않을 경우 arr배열과 check 1~3배열에 체크(1) 값을 넣는다.
	arr[y][x] = 1;
	check1[x] = 1;
	check2[y + x] = 1;
	check3[y - x + n] = 1;

	//queen의 y가 n까지 왔을때 
	//이 조건이 참인 경우에는 모든 queen이 겹치지 않는 경우의 수이다.
	if (y == n) {
		cnt++;
		arr[y][x] = 0;
		check1[x] = 0;
		check2[y + x] = 0;
		check3[y - x + n] = 0;
		return;
	}

	//i는 x좌표를 가리키며 n 만큼 반복하고 y+1 y좌표의 재귀함수를 생성한다.
	for (i = 1; i <= n; i++) {
		queen(y + 1, i); //재귀함수가 실행되어 해당 재귀가 끝날때 까진 다음 줄로 가지 않는다.
	}


	//if (y == n)에서 거짓이 되고 위 재귀함수에서 나왔을 때 
	//위 과정들을 했을 경우 arr와 check 1~3배열에 자리를 비워준다. 
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

//백준 9663번 n queen 알고리즘
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
		//출력
		arr[y][x] = 0; //내 위치에 값을 비운다.
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