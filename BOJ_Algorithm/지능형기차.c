#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i, sum = 0;
	int max=0;
	int in, out;

	for (i = 0; i < 4; i++)
	{
		scanf("%d %d", &out, &in);
		sum += in - out;
		if (max <= sum) max = sum;
	}
	printf("%d", max);
}