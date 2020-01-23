#include <stdio.h>


void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int in;
	int i, j;

	int arr[20] = { 0 };
	int seq[20] = { 0 };
	scanf("%d", &in);
	for (i = 0; i < in; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < in; i++)
	{
		if (seq[i] == 0) seq[i] = 1;
		for (j = 0; j <= i; j++)
		{
			if (arr[i] > arr[j])
			{
				if (seq[i] < seq[j] + 1) {
					seq[i] = seq[j] + 1;

				}
			}
		}
	}


		/*
		if (arr[i - 1] <= arr[i])
		{
			
			for (j = i; j >= 0; j--)
			{
				if (arr[i]-1 >= min)
				{
					min = arr[i] - 1;
				}
			}
		}
		else
		{
			seq[i] = seq[i - 1];
		}
		*/
	int length=0;
	for (i = 0; i < in; i++)
		length = seq[i] >= length ? seq[i] : length;
	printf("%d", length);
	
}