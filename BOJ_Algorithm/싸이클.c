#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int N, P;
	int nam[10000] = { 0 };
	int count = 0;
	scanf("%d %d", &N, &P);

	int a = N, b = P, c;
 

	while (1)
	{
		c = (a*N) % b;
		a = c;
		
		if (nam[c] == 0)
			nam[c] = 1;
		else
			break;
		
		count++;

	}

	printf("%d", count);
}