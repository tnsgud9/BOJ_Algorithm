#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int NX, NY;

	int nx, ny;
	int stop;
	int count = 0;
	int i;

	int x = 1, y = 0;
	int sw = 1;

	scanf("%d %d", &NX, &NY);
	scanf("%d", &stop);

	ny = NY;
	nx = NX - 1;

	while (1)
	{
		for (i = 1; i <= ny; i++)
		{
			y+=sw;
			count++;
			if (count == stop) {
				printf("%d %d", x, y);
				return 0;
			}
		}

		for (i = 1; i <= nx; i++)
		{
			x+=sw;
			count++;
			if (count == stop) {
				printf("%d %d", x, y);
				return 0;
			}
		}
		nx--; ny--;
		sw = sw * -1;

	}






	/*
	int pos[6][7] = { 0 };
	int NX, NY;
	int myPos;
	scanf("%d %d", &NY, &NX);
	//NY,NX 변수 접근 하지 않음
	scanf("%d", &myPos);
	int count = 1;

	int nx=NX-1, ny=NY;
	int i;
	int sw=1;

	int y=0, x=1;
	while (count<=myPos) {
		for (i = ny; i >= 0; i--)
		{
			y += sw;
			pos[y][x] = count;
			count++;
			//if (count == myPos) break;

		}

		for (i = 0; i < nx; i++)
		{
			x += sw;
			pos[y][x] = count;
			count++;

			//if (count == myPos) break;
		}


		//if (count == myPos) break;
		nx--;
		ny--;
		sw *= -1;


	}

	for (int a = 0; a < 6; a++)
	{
		for (int b = 0; b < 7; b++)
			printf("%d ", pos[a][b]);
		printf("\n");
	}
	//printf("%d %d", x,y);



	*/







	/*
	int count = 1;
	int pos[6][7] = { 0 };	 // [7][6] 까지 사용;
						//  index[7][6];
						//  index[y][x];
	
	int index_Y, index_X;

	int x=0,y=0;
	//temp;
	int X=0, Y=0; //counter

	int inX, inY;
	scanf("%d %d", &inX, &inY);

	for (y = inY; y >= Y; y--)
	{
		pos[y][x] = count;
		count++;
	}
	X++;
	y++;
	for (x = X; x < inX; x++)
	{
		pos[y][x] = count;
		count++;
	}


	*/




	/*
	for (int a = 1; a <= inX * inY; a++) {
		for (y = inY; y >= Y; y--)
		{
			pos[y][x] = count;
			count++;
		}
		X++;
		for (x = X; x <= inX; x++)
		{
			pos[y][x] = count;
			count++;
		}
		Y--;
	}


	*/




	//temp 변수
	/*
	for (y = maxY-UpperLimit; y <= minY+DownLimit; y--)
	{
		index[y][x] = count;
		count++;
		y++;
	}
	DownLimit++;
	for (x = minX + DownLimit; x <= maxX - UpperLimit; x++)
	{
		index[y][x]
	}



	*/






	/*
	for (y = Y; y <= 1; y--)
	{
		index[y][x] = count;
		count++;
	}

	for (x = 2; x <= X; x++)
	{
		index[y][x] = count;
		count++;
	}
	*/
}