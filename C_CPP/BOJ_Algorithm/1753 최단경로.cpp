#include <iostream>
#include <vector>
#include <queue>
using namespace std;


queue<int> path;
int V, E;
int K; //시작 정점
int shortPathWeight = 1234567890;
//vector<vector<int>> node;
int shortPathFind = 0;
// 0은 도달 못함
// 1은 찾음
// 2은 해당 지점까지 도달 못함.
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

		if (u[index].vw[i].first == E) //끝에 도달했을 시
		{
			shortPathFind = 1;
			weight += u[index].vw[i].second; //가중치 넣고
			
			if (shortPathWeight > weight) //더 작은지 비교
			{
				
				// 종료 이벤트
			}
		}
		else
		{
			if (shortPath[i] > weight) {
				//종료 이벤트 
				shortPath[i] = weight;
				dijkstra(u[index].vw[i].first, weight + u[index].vw[i].second);
				cout << "튀어나옴";
				return;
			}
			else return; // 최장 경로이기에 가중치 종료

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
	//w는 간선의 가중치
	//node.resize(E + 2, vector<int>(E + 2, 0));
	u.resize(E + 2);
	shortPath.resize(E + 2,1234567890);

	for (int i = 1; i <= E; i++) {
		int U, v, w;
		cin >> U >> v >> w;
		u[U].vw.push_back(make_pair(v, w));
	}
	dijkstra(1, 0);
	//출력마지막에
	//shortPathFind ==2 
	//cout << "INF";
	//dijkstra();
}