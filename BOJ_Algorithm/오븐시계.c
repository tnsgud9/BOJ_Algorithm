#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int H, M, time;

	scanf("%d %d", &H, &M);
	scanf("%d", &time);

	M = M + time;
	if (M>60)
	{
		H += M / 60;
		M %= 60;
	}
	if (H <= 24)
		H = 0;
	printf("%d %d", H, M);
}