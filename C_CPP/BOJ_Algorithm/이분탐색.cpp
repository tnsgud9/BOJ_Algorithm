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
	cin >> n;  //�󸶳� �޴��� 
	cin >> answer; //ã�� ���� ��������

	
	// n��ŭ �Է¹޴´�.
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	//vec�� ���� ������ �⺻������ ������ �Ǿ� �־���Ѵ�.
	
	int back = vec.size();
	//�̺�Ž�� �Լ��� 2���� ������ vec�� ���۰� ���� ����Ű�� vec������ �ε����� ����Ų��.
	binary_search(0 , vec.size()-1);  //n�� 10�� �Է½� 0~9���� ���� ����Ѵ�.
	//����Լ��� ����Ѵ�.
	
}

// left ����, right ������ 
// left front , right back
int binary_search (int left, int right)
{
	//�߸��� ���ѷ���
	int mid = (left + right) / 2; //vec�� ��� �ε����� ����
	// left�� right�� ���� left right ������ �ش��ϴ� mid �ε����� ���Ѵ�.
	// ex) n=10; answer = 7 (index:6); left = 5; right = 9; 
	//     left + right = 14   14 / 2 = 7(index)    

	// �� ã�� �� ���� ����
	if (vec[mid] == answer) {
		cout << answer << "��" << mid << "������ �ֽ��ϴ�.";
		return mid; //ã�� �� ��ȯ
	}

	if (vec[mid] < answer) {
		return binary_search(mid + 1, right);
		//��� �Լ�
	}

	if (vec[mid] > answer) {
		return binary_search(left, mid - 1);
	}
	
}