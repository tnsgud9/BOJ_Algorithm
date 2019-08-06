#include <stdio.h>
#include <math.h>

void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int A[100] = { 0 };


	int n, count = 0; // input;
	int i, j;

	scanf("%d", &n);


	A[0] = 1;

	for (i = 0; i < n; i++)
	{
		for (j = count; j >= 0; j--)
		{
			A[j] = A[j] * 2;
			if (A[j] >= 10) {
				if (j == count) {
					count++;
				}

				A[j + 1] = A[j + 1] + A[j] / 10;
				A[j] = A[j] % 10;
			}
		}

	}
	for (i = count; i >= 0; i--) {
		printf("%d", A[i]);
	}















	/*  이것이 정석 
	for (i = 0; i < n; i++) {
		for (j = count; j >= 0; j--) {
			A[j] = A[j] * 2;
			if (A[j] >= 10) {
				if (j == count) {
					count++;
				}
				A[j + 1] = A[j + 1] + A[j] / 10;
				A[j] = A[j] % 10;
			}
		}
	}

	for (i = count; i >= 0; i--) {
		printf("%d", A[i]);
	}


	*/













	/*
	int n ,i,j,k,carry,temp,L;
	scanf("%d", &n);



	for (j = 0; j < n; j++)
	{
		for(i=0;i < L;i++)
		{
			A[i] *= 10;
		}
		carry = 0;
		if (A[L] >= 10) L++;
		for



	}

	*/
}