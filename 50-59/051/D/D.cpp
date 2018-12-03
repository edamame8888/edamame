#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

const long long INF = 1e9;
using namespace std;
struct Edge{
  int to;
  int from;
  long long cost;
};
int main(){
  //input
  int N,M;
  cin >> N >> M;

  //def graph and edge
  vector<vector<long long>> graph(N,vector<long long>(N,INF));
  vector<Edge> edge(M);

  //input
  rep(i,M){
    cin >> edge[i].to >> edge[i].from >> edge[i].cost;
    edge[i].to --;  edge[i].from --;                  //0index
    graph[edge[i].to][edge[i].from] = edge[i].cost;   //double sides
    graph[edge[i].from][edge[i].to] = edge[i].cost;   //double sides
  }

  //Warshall–Floyd
  vector< vector<long long> > dist(graph);
  rep(i,N) dist[i][i] = 0;

  rep(k,N){
    rep(i,N){
      rep(j,N){
        dist[i][j] = min(dist[i][j] , dist[i][k] + dist[k][j]);
      }
    }
  }

  // check Edge
  int ans = 0;

  rep(i,M){
    bool shortestFlag = false;
    rep(j,N){
      FOR(k,j+1,N){
        if(j == k) continue;
        if(dist[j][k] ==  dist[j][edge[i].from] +
                          edge[i].cost          +
                          dist[edge[i].to][k]      // j -> from -> to -> k
                          ||                       // or
          dist[j][k] ==   dist[j][edge[i].to]   +  // j -> to -> from -> k
                          edge[i].cost          +
                          dist[edge[i].from][k]
        ){
          shortestFlag = true;
        }
      }
    }
    if(shortestFlag == false) ans ++;
  }

  // output
  cout << ans << endl;
  return 0;
}
