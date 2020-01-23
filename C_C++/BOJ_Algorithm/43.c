#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int in;
	int a, b;
	int random, count=0;
	scanf("%d", &in);

	srand(time(NULL));
	random = rand() % 6;
	for (a = 0; a < 6; a++)
	{
		for (b = 0; b < in; b++)
		{
			if (random == a)
			{

				count++;
			}
			random = rand() % 6;
		}
		printf("%d %d %.2f \n", a+1, count, count / in * 100);
		
	}



}