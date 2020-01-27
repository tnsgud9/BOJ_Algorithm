#include <iostream>
#include <vector>

using namespace std;

int binary_search (int left, int right);

vector<int> vec;
int n;
int answer;

int main()
{
	
	freopen("input.txt", "r", stdin);
	cin >> n;  //얼마나 받는지 
	cin >> answer; //찾는 값이 무엇인지

	
	// n만큼 입력받는다.
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	//vec의 들어가는 변수는 기본적으로 정렬이 되어 있어야한다.
	
	int back = vec.size();
	//이분탐색 함수의 2가지 변수는 vec의 시작과 끝을 가리키며 vec변수의 인덱스를 가리킨다.
	binary_search(0 , vec.size()-1);  //n의 10을 입력시 0~9번지 까지 사용한다.
	//재귀함수를 사용한다.
	
}

// left 왼쪽, right 오른쪽 
// left front , right back
int binary_search (int left, int right)
{
	//잘못된 무한루프
	int mid = (left + right) / 2; //vec의 가운데 인덱스를 저장
	// left와 right를 더해 left right 구간의 해당하는 mid 인덱스를 구한다.
	// ex) n=10; answer = 7 (index:6); left = 5; right = 9; 
	//     left + right = 14   14 / 2 = 7(index)    

	// 값 찾은 후 종료 구간
	if (vec[mid] == answer) {
		cout << answer << "은" << mid << "번지에 있습니다.";
		return mid; //찾은 값 반환
	}

	if (vec[mid] < answer) {
		return binary_search(mid + 1, right);
		//재귀 함수
	}

	if (vec[mid] > answer) {
		return binary_search(left, mid - 1);
	}
	
}