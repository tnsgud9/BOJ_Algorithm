#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i = 1;

	int N, K;
	scanf("%d %d", &N, &K);

	while (i<=K)
	{
		int temp = N % i;
		if (temp == 0)
			i++;

	}
	printf("%d", i-1);
}