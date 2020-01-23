#include <stdio.h>


void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int in;
	int a, b;
	int i, j;
	scanf("%d", &in);
	while (in>0)
	{
		printf("%d", in % 2);
		in /= 2;
	}

}