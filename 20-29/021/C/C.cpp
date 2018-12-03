#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
using namespace std;


const int MOD = 1000000007;


int N, start , goal, M;
bool load[100][100];

int bfs(){
	deque<int> q;
	vector<int> dist(N,-1);
	dist[start] = 0;
	q.push_back(start);
	while(!q.empty()){
		int current = q.front();
		q.pop_front();
		if(current == goal) return dist[goal];
		for(int i = 0; i < N; i++){
			if(load[current][i] == true && dist[i] == -1 ){
				dist[i] = dist[current] + 1;
				q.push_back(i);
			}
		}
	}
	return 0;
}

int func(int minTime){
	vector<int> visitedTime(N,0);
	vector<int> prevVisitedTime(N,0);
	visitedTime[goal] = 1;
	for(int i = 0; i < minTime; i++){
		for(int j = 0; j < N; j++){
			for(int k = 0; k < N; k++){
				if(load[j][k]) prevVisitedTime[k] += visitedTime[j];
			}
		}
		for(int x = 0; x < N; x++) {
			visitedTime[x] = visitedTime[x] + prevVisitedTime[x] % MOD;
			prevVisitedTime[x] = 0;
		}
	}

	return visitedTime[start];
}

int main(){
	//input
	cin >> N >> start >> goal >> M;
	start--; goal--;
	for(int i = 0; i < M; i++){
		int x,y;
		cin >> x >> y;
		x--;
		y--;
		load[x][y] = true;
		load[y][x] = true;
	}

	int minTime = bfs();

	int ans = func(minTime);

	cout << ans << endl;
	return 0;
}
