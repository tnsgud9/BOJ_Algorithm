// 백준 - 수 정렬하기 시리즈
// https://www.acmicpc.net/problem/2750   수 정렬하기 
// https://www.acmicpc.net/problem/2751   수 정렬하기 2
// https://www.acmicpc.net/problem/10989  수 정렬하기 3



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);  // 이것을 사용할시 scanf를 사용할 수 없나 처리속도가 증가한다.
	cin.tie(0);



	vector<int> arr;


	int n;
	cin >> n;  

	arr.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	

	sort(arr.begin(), arr.end(), less<int>());  //greater<int>() 내림차순 , less<int>() 오름차순


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}

}