// ���� - �� �����ϱ� �ø���
// https://www.acmicpc.net/problem/2750   �� �����ϱ� 
// https://www.acmicpc.net/problem/2751   �� �����ϱ� 2
// https://www.acmicpc.net/problem/10989  �� �����ϱ� 3



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);  // �̰��� ����ҽ� scanf�� ����� �� ���� ó���ӵ��� �����Ѵ�.
	cin.tie(0);



	vector<int> arr;


	int n;
	cin >> n;  

	arr.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	

	sort(arr.begin(), arr.end(), less<int>());  //greater<int>() �������� , less<int>() ��������


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}

}