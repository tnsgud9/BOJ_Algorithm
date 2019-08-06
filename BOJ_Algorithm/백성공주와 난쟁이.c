
#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int in[10];

	for (int a = 0; a < 7; a++)
		scanf("%d", &in[a]);

	for (int a = 0; a < 7; a++)
	{
		for (int b = a; b < 7 - a; b++)
		{
			if (in[a] <= in[b])
			{
				int temp = in[a];
				in[a] = in[b];
				in[b] = temp;
			}
		}
	}
	printf("%d\n%d", in[0], in[1]);
}