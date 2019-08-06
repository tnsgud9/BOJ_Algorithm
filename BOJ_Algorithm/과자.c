#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int K, N, M;
	scanf("%d %d %d", &K, &N, &M);

	printf("%d", (K*N) - M);
}