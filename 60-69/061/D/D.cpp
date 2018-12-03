#include <bits/stdc++.h>

using namespace std;

int N,M;
long long   from[2010], to[2010];
long long   cost[2010];
long long   dist[1100];
long long   const INF = 1e18;
//bellmanford
bool bellmanford(){
  fill(dist,dist+1100,INF);
  dist[0] = 0;
  for(int k = 0; k < 2*N ; k++){  //node nums
    for(int i = 0; i < M; i++){   // edge nums
      if(dist[from[i]] < INF && dist[to[i]] > dist[from[i]] + cost[i] ){
        dist[to[i]] = dist[from[i]] + cost[i];
        if(k >= N && to[i] == N-1) return  true;
      }
    }
  }
  return false;
}
//main()-----------------------------
int main(){
  cin >> N >> M;
  for(int i = 0; i < M; i++){
    cin >> from[i] >> to[i] >> cost[i];
    from[i] --; to[i] --;
    cost[i] = -cost[i];
  }

  bool infFlag = bellmanford();

  if(infFlag) cout << "inf" << endl;
  else        cout << -dist[N-1] << endl;
  return 0;
}
