//https://www.acmicpc.net/problem/16916
// 16916 �κ� ���ڿ�
// KMP �˰���
#include <iostream>
#include <string>
#include <vector>
using namespace std;


string s, p; //string , pattern 
vector<int> fail;  // 

void makeFail() {
	fail.resize(p.length());
	for (int i = 1,j=0; i < fail.size(); i++) {
		while (j != 0 && p[j] != p[i]) j = fail[j - 1];
		if (p[i] == p[j]) fail[i] = ++j;

	}

}

int main()
{
	cin >> s >> p;
	// ���Ϲ��ڿ� ���� �����Լ��� ������ �Ѵ�.
	int answer=0;
	makeFail();

	for (int i = 0, j = 0; i < s.length(); i++) {
		while (j != 0 && s[i] != p[j]) j = fail[j - 1];
		if (s[i] == p[j]) {
			j++;
			if (j == p.length()) {
				answer = 1;
				break;
			}
		}
	}
	cout << answer;
	return 0;
}

