#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	char in[6][6];

	for (int a = 0; a < 5; a++)
		scanf("%s", in[a]);

	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			printf("%c", in[b][a]);
		}
	}

	return 0;
}