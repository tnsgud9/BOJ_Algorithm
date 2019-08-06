#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int in;
	for (int a = 0; a < 5; a++)
	{
		scanf("%d", &in);
		sum += in*in;
	}

	printf("%d", sum % 10);
}