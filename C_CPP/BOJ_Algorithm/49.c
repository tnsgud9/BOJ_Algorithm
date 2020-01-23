#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int in;

	scanf("%d", &in);
	int in2 = in * in;
	int in3 = in2;
	int a, b, c;
	for (a = 0; a < in; a++)
	{
		in3 = in2;
		for (b = 0; b < in; b++)
		{

			printf("%d ", in3);
			in3 -= in;
		}
		in2--;
		printf("\n");
	}
}