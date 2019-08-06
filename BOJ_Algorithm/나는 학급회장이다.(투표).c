#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int who[3] = { 0 };
	int i;
	int a, b, c;
	int in;

	scanf("%d", &in);
	for (i = 0; i < in; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		who[0] += a;
		who[1] += b;
		who[2] += c;

	}
	int max;
	int num;
	if (who[0] > who[1]) {
		max = who[0];
		num = 1;
	}
	else {
		max = who[1];
		num = 2;
	}

	if (max < who[2])
	{
		max = who[2];
		num = 3;
	}

	if (who[0] == who[1] || who[0] == who[2] || who[1] == who[2])
		printf("0 %d", max);
	else
		printf("%d %d", num , max);

}