//백준 9663번 n queen 알고리즘

#include <stdio.h>
#define N 10

using namespace std;

int n;
int arr[N][N];
int check1[N]; //세로축을 기반으로 인덱스 배열에 queen(1)이 있는지 확인한다.
int check2[N*2]; //인덱스 배열 기준 가로에 queen(1)이 있는지 확인한다.
int check3[N*2]; //-번지가 없기 떄문에 +N 씩 된다. ↑ 위에도 같은 의미.
void queen(int y, int x)
{
	int i;
	//가로 세로 
	if (check1[y] == 1) return; //있을경우 뒤 돌아간다.
	if (check2[x + y] == 1) return;
	if (check3[x - y + n] == 1) return;
	 
	for(i=1;i)
}


int main()
{

}