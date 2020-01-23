#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int in[5],sum=0;
	for (int a = 0; a < 5; a++)
	{
		scanf("%d", &in[a]);
		sum += in[a];
	}
	for (int a = 0; a < 5; a++)
	{
		for (int b = a; b < 5 - a; b++)
		{
			if (in[a] > in[b])
			{
				int temp = in[a];
				in[a] = in[b];
				in[b] = temp;
			}
		}
	}
	printf("%d\n%d", sum/5, in[3]);


}
