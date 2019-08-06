#include <stdio.h>
#include <math.h>
#include <string.h>


void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i;
	int data[20] = { 0, };
	while (1)
	{
		scanf("%d", &i);
		if (i == 0) break;
		data[i]++;
	}
	while (1)
	{
		scanf("%d", &i);
		if (i == 0) break;
		data[i]++;
	}



	int size = sizeof(data) / sizeof(int);
	for (i = 0; i < size; i++)
	{
		if(data[i]==2)
			printf("%d ",i);
	}
	printf("\n");
	for (i = 0; i < size ; i++)
	{
		if (data[i] >= 1)
			printf("%d ",i);
	}
}