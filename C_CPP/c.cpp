#include <iostream>
#include <vector>
#include <string>

using namespace std;
//atoi
int N; long K;
int cnt;
vector<int> vec;
vector<int> sp;
string storage;
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> N >> K;
	vec.resize(N+1);
	sp.resize(N + 1);

	for (int i = 0; i < N; i++) cin >> vec[i];

	for (int i = 0; i < vec.size(); i++) {
		storage = to_string(vec[i]);
		for (int j = i+1; j < vec.size(); j++) {
			if (stoi(storage) >= K) {
				cnt+=vec.size() - j;
				break;
			}
			else
			{
				storage = to_string(stoi(storage) + vec[j]);
			}
		}
	}

	cout << cnt;
}