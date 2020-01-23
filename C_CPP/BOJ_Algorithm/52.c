#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int data[20][20] = { 0, }; //[11][6];
	int in, half;
	int a, b, c;
	int temp;
	scanf("%d", &in);
	half = (in / 2);

	data[0][in] = 1;
	//data[a][b]
	for (a = 1; a < in; a++) //6
	{
		for (b = 2; b <= in*2; b ++)//12
		{
			temp = data[a - 1][b - 2] + data[a - 1][b];
			data[a][b-1] = temp;  //문제 원인
		}
	}







	for (a = 0; a < in; a++)
	{
		for (b = 0; b <= in*2; b++)
		{
			
			printf("%d\t", data[a][b]);
		}
		printf("\n");
	}
}
