#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  int N,M;
  cin >> N >> M;
  vector< vector<int> > graph(N,vector<int>(N,1e9));
  rep(i,N) graph[i][i] = 0;
  rep(i,M){
    int a,b,t;
    cin >> a >> b >> t;
    a--; b--;
    graph[a][b] = min(graph[a][b],t);
    graph[b][a] = min(graph[b][a],t);
  }

  rep(k,N)rep(i,N)rep(j,N){
    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
  }
  int minTime = 1e9;
  rep(i,N){
    int maxTime = 0;
    rep(j,N){
      maxTime = max(graph[i][j],maxTime);
    }
    minTime = min(minTime,maxTime);
  }
  cout << minTime << endl;
  return 0;
}
