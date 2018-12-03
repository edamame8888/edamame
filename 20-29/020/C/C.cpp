#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

#define INF LLONG_MAX
typedef long long ll;
struct edge{ll to, cost;};
typedef pair<ll,ll> P;


struct graph{
  ll V;
  vector<vector<edge> > G;
  vector<ll> d;

  graph(ll n){
    init(n);
  }

  void init(ll n){
    V = n;
    G.resize(V);
    d.resize(V);
    for(int i = 0;i < V; i++){
      d[i] = INF;
    }
  }

  void add_edge(ll s, ll t, ll cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }

  void dijkstra(ll s){
    for(int i = 0;i < V; i++){
      d[i] = INF;
    }
    d[s] = 0;
    priority_queue<P,vector<P>, greater<P> > que;
    que.push(P(0,s));
    while(!que.empty()){
      P p = que.top(); que.pop();
      ll v = p.second;
      if(d[v]<p.first) continue;
      for(auto e : G[v]){
        if(d[e.to]>d[v]+e.cost){
          d[e.to] = d[v]+e.cost;
          que.push(P(d[e.to],e.to));
        }
      }
    }
  }
};


  string board[10];
  long long H,W,T,sx,sy,gx,gy;
/*
graph g(n);

と書けばn頂点のグラフが作成され、

  g.add_edge(a,b,cost);

とすれば頂点aから頂点bへのコストcostの辺が張られます。そして

  g.dijkstra(s);

とすれば頂点sから各頂点への最短経路をダイクストラ法で探索できます。探索結果は

  int dist = g.d[i];

と呼び出して使うことができます。
*/

bool checkCost(long long x){

  int dx[4] = {0,1,0,-1};
  int dy[4] = {1,0,-1,0};

  graph g(H*W);

  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(board[i][j] == 'S') continue;
      long long cost;
      if(board[i][j] == '.' || board[i][j] == 'G') cost = 1;
      else cost = x;
      // 周りからboard[i][j]に向かうには'.' = 1 または、'#' = xのコストがかかる
      for(int k = 0; k < 4; k++){
        int ny = i + dy[k];
        int nx = j + dx[k];
        if(nx >= 0 && ny >= 0 && nx < W && ny < H){
          g.add_edge((ny * W + nx) , (i * W + j) , cost );
        }
      }
    }
  }

  g.dijkstra(sx + sy * W);

  long long dist = g.d[gx + gy * W];
  return dist <= T;
}

int main(){
  cin >> H >> W >> T;

  //intput
  for(int i = 0; i < H; i++){
    cin >> board[i];
    for(int j = 0; j < W; j++){
      if(board[i][j] == 'S'){
        sy = i;
        sx = j;
      }else if(board[i][j] == 'G'){
        gy = i;
        gx = j;
      }
    }
  }

  //binarySearch
  long long  left = 1, right = T, mid;

  while(right - left > 1){
    mid = (left + right) / 2;
    if(checkCost(mid)) left = mid;
    else right = mid;

  }

  cout << left << endl;


  return 0;
}
