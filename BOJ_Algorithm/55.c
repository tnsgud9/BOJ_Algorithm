#include <stdio.h>

void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a;
	int in;
	scanf("%d", &in);
	int data[10] = { 1,1 };

	for (a = 2; a < in; a++)
	{
		data[a] = data[a - 2] + data[a - 1];
	}
	printf("%d", data[in-1]);
}