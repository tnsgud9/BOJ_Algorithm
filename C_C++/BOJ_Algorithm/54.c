#include <stdio.h>

void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int data[10][10] = { 0 }; //5 5; const data[x][y];  가로 = b 세로 = a;
	int in;
	scanf("%d", &in);
	int x = 1, y = 1, c = 0;
	int limit = in;
	int count = 1;
	int sw = 1;
	int i, j;


	while (1)
	{

		for (i = 1; i <= limit; i++)
		{
			data[y][x] = count;
			count++;
			x += sw;
		}
		x -= sw;
		y += sw;
		limit--;

		for (i = 1; i <= limit; i++)
		{
			data[y][x] = count;
			count++;
			y += sw;
		}
		if (count > in*in) break;
		y -= sw;
		x -= sw;
		sw *= -1;

	}



































	/*
	while (1)
	{
	for (i = 1; i <= limit; i++) {
	data[y][x] = count;
	count++;
	x += sw;
	}
	x -= sw;
	y += sw;
	limit -= 1;

	for (i = 1; i <= limit; i++) {
	data[y][x] = count;
	count++;
	y += sw;
	}
	if (count > in*in) break;
	y -= sw;
	sw *= -1;
	x += sw;
	}
	*/

	for (i = 1; i <= in; i++) {
		for (j = 1; j <= in; j++) {
			printf("%2d ", data[i][j]);
		}
		printf("\n");
	}
}
