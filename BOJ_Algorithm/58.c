#include <stdio.h>
#include <math.h>

void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int m, n, x;
	scanf("%d %d %d", &n, &m, &x);
	int mok, na;
	printf("%d.", n / m);
	n = n % m * 10;
	for (int a = 1; a <= x; a++) {
		mok = n / m;
		printf("%d", mok);
		na = n  % m;
		n = na * 10;
	}
	
	/*
	double a,m,n;
	int x;
	int b = 10;
	char c[100];
	scanf("%lf %lf %d", &m,&n,&x);
	a = m / n;
	c = ftoa(a);
	printf("%d", (int)a);
	printf(".");
	for (int i = 1; i <= x; i++)
	{
		a = a * 10;
		printf("%d", (int)a%10);
		a = a - (int)a;
	}

	*/

	/*
	int M, N, X;
	scanf("%d %d %d", &M, &N, &X);

	printf("%d", M / N);
	int end = X * X;
	while (X <=end)
	{
		int temp = 
		X += X;
	}
	*/











}