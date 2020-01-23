#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int a;
	int n,n2;
	int count = 0;

	scanf("%d", &n);
	for (a = 0; a < 5; a++)
	{
		scanf("%d", &n2);
		if (n == n2)
			count++;
	}
	
	printf("%d", count);
}