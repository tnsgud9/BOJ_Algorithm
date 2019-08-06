#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int data[10];
	int a ,sum=0,min=100;
	int in;
	for (a = 0; a < 7; a++) {
		scanf("%d", &in);

		if (in % 2 == 1)
		{
			sum += in;
			if (in <= min)
				min = in;
		}

	}
	if (sum <= 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);

}