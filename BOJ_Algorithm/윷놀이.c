#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int in;
	int re=0;
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 4; b++)
		{
			scanf("%d", &in);
			if (in == 0)
				re++;
			
		}
		printf("%c",re + 64);
		re = 0;
	}

}