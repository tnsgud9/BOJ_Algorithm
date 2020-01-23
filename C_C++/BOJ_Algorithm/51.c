#include <stdio.h>
//Áß¿ä
void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a, b,c;
	int in, half,temp;

	scanf("%d", &in);
	half = (in / 2) + 1;


	for (a = 1; a <= half; a++)
	{
		for(c = 1; c <= half - a; c++)
		{
			printf(" ");
		}
		for (b = 1; b <= a * 2 - 1; b++)
		{
			printf("*");
		}
		printf("\n");

	}

	for (a = 1; a <= half; a++)
	{
		for (c = 1; c <= half - a; c++)
		{
			printf(" ");
		}
		for (b = 1; b <= a * 2 - 1; b++)
		{
			printf("*");
		}
		printf("\n");

	}





	/*
	for (a = 1; a <= half; a++)
	{
		for (c = 0; c < half - a; c++)
		{
			printf(" ");
		}
		for (b = 1; b <= a*2-1; b++)
		{
			printf("*");

		}
		printf("\n");
			
	}

	for (a = half-1; a > 0; a --)
	{
		for (c = half-a; c > 0; c--)
		{
			printf(" ");
		}
		for (b = 1; b <=a*2-1; b++)
		{
			printf("*");
		}
		printf("\n");

	}
	*/

	/*
	for (a = 0; a < half; a++)
	{
		for (b = in; b >= 0; b--)
		{
			printf(" ");
		}
		for (b = half; b >= 0; b--)
		{
			printf("*");
		}
		printf("\n");

	}
	*/
}