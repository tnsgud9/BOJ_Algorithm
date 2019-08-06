#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int in;
	scanf("%d", &in);

	int a, b;
	int count = 1;

	for (a = 1; a <= in; a++)
	{
		for (b = in; b >= a; b--)
			printf(" ");


		for (b = 0; b < count; b++)
			printf("*");


		count += 2;
		printf("\n");
	}

}