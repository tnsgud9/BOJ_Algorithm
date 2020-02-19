#include <iostream>
#include <vector>
#include <queue>
using namespace std;


queue<int> path;
int V, E;
int K; //���� ����
int shortPathWeight = 1234567890;
//vector<vector<int>> node;
int shortPathFind = 0;
// 0�� ���� ����
// 1�� ã��
// 2�� �ش� �������� ���� ����.
vector<int> shortPath;
struct node //u
{
	vector<pair<int,int>> vw;
	//first == v
	// second == w;
};

vector<node> u;
void dijkstra(int index, int weight)
{
	for (int i = 0; i < u[index].vw.size(); i++)
	{

		if (u[index].vw[i].first == E) //���� �������� ��
		{
			shortPathFind = 1;
			weight += u[index].vw[i].second; //����ġ �ְ�
			
			if (shortPathWeight > weight) //�� ������ ��
			{
				
				// ���� �̺�Ʈ
			}
		}
		else
		{
			if (shortPath[i] > weight) {
				//���� �̺�Ʈ 
				shortPath[i] = weight;
				dijkstra(u[index].vw[i].first, weight + u[index].vw[i].second);
				cout << "Ƣ���";
				return;
			}
			else return; // ���� ����̱⿡ ����ġ ����

		}

	}

	if (shortPathFind == 1)
	{
		cout << weight;
		return;
	}

	if (u[index].vw.size() == 0 && shortPathFind == 0 || shortPathFind == 2)
	{
		shortPathFind = 2;
		cout << weight;
		return;
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	
	cin >> V >> E;
	//w�� ������ ����ġ
	//node.resize(E + 2, vector<int>(E + 2, 0));
	u.resize(E + 2);
	shortPath.resize(E + 2,1234567890);

	for (int i = 1; i <= E; i++) {
		int U, v, w;
		cin >> U >> v >> w;
		u[U].vw.push_back(make_pair(v, w));
	}
	dijkstra(1, 0);
	//��¸�������
	//shortPathFind ==2 
	//cout << "INF";
	//dijkstra();
}