#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int in,i;
	int a ,max=0;
	for (a = 1; a <= 9; a++)
	{
		scanf("%d", &in);
		if (max <= in)
		{
			max = in;
			i = a;
		}
	}

	printf("%d\n%d", max, i);
}