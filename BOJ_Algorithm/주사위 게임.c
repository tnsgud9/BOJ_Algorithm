#include <stdio.h>

void main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);



	int in;
	int i,j;
	int bigReward=0,reward = 0;
	int a, b, c;
	int count[7] = { 0 };
	int bigDiceNumber;
	scanf("%d", &in);

	for (i = 0; i < in; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		count[a]++;
		count[b]++;
		count[c]++;

		for (int i = 1; i <= 6; i++)
		{
			if (count[i] == 1) {
				for (j = 6; count[j] != 0; j--) {}
				bigDiceNumber = j - 1;
				reward = bigDiceNumber * 100;
			}
			else if (count[i] == 2)
				reward = 1000 + i * 100;
			else if (count[i] == 3)
				reward = 10000 + i * 1000;


		}
		if (bigReward <= reward)
			bigReward = reward;

		for (int i = 1; i <= 6; i++)
			count[i] = 0;
	}


	printf("%d", bigReward);

}