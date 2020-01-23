#include <iostream>


using namespace std;

int zero = 0;
int one = 0;

int fibonacci(int n) {
	if (n == 0) {
		zero++;
		return 0;
	}
	else if (n == 1) {
		one++;
		return 1;
	}
	else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}


int main()
{
	int in;
	cin >> in;

	for (int i = 1; i <= in; i++)
	{
		int tmp;
		cin >> tmp;

		if (tmp == 0) {}
		if (tmp == 1)
		{
			one = 1;
		}
		else
			fibonacci(tmp);

		cout << zero <<" "<< one<<"\n";
		zero = 0, one = 0;
	}
}
