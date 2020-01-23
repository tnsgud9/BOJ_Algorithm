#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	
	
	int in;
	int data[10][2] = { 0 };
	int ranking[10];
	int compare = 0;
	int i, a, b;

	scanf("%d", &in);
	for (i = 0; i < in; i++) {
		scanf("%d %d", &data[i][0], &data[i][1]);
		ranking[i] = 5;
	}

	for (a = 0; a < in; a++)
	{
		for (b = 0; b < in; b++)
		{
			if (a == b)
			{
				continue;
			}

			if (data[a][0] < data[b][0])
			{
				ranking[a]--;

			}
			else
			{
				if (data[a][1] < data[b][1])
					ranking[a]--;
			}
		}
	}
	for (i = 0; i < in; i++)
		printf("%d\n", ranking[i]);
	
	
	
	
	
	
	
	/*
	int in;
	int i = 0;
	int w_h[10][3] = { 0 }; //2번지 랭크

	int a, b;
	int rank[10] = { 1 };

	int side[2] = { NULL };//weight height;
	scanf("%d", &in);

	for (i = 0; i < in; i++) {
		scanf("%d %d", &w_h[i][0], &w_h[i][1]);
		w_h[i][2] = in;
	}

	for (a = 0; a < in; a++)
	{
		for (b = 0; b < in - a; b++)
		{
			if (w_h[a][0] >= w_h[b][0])
				side[0] = 0; //a가 더 클시
			else
				side[0] = 1; //더 작을시

			if (w_h[a][1] >= w_h[b][1])
				side[1] = 0;
			else
				side[1] = 1;

			if (side[0] == 0 && side[1] == 0)
				w_h[a][2]--;
			else if (side[0] == 1 && side[1] == 0)
				w_h[a][2]--;
			else if (side[0] == 0 && side[1] == 1)
				w_h[a][2]--;

			int side[2] = { NULL };
		}
	}


	for (a = 0; a < in; a++)
		printf("%d\n", w_h[a][2]);

		*/

}