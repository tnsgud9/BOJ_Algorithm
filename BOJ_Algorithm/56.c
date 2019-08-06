#include <stdio.h>
#include <math.h>
void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i;
	int a, b, c;
	for (i = 1; i < 1000; i++)
	{
		a = i % 10;
		a = pow(a, 3);
		b = (i / 10) % 10;
		b = pow(b, 3);
		c = i / 100;
		c = pow(c, 3);

		if ((a + b + c) == i)
			printf("%d\n", i);
	}
}