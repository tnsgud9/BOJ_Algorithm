#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	char data[100] = { 0 };
	int i = 1;
	int sum = 10;
	scanf("%s", data);

	while (data[i]!=NULL)
	{
		if (data[i - 1] == data[i])
			sum += 5;
		else
			sum += 10;

		i++;
	}

	printf("%d", sum);

}