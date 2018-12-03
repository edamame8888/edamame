#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
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
#include <queue>
#include<climits>
using namespace std;


#define INF LONG_MAX
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
    for(int i = 0; i < V; i++){
      d[i] = INF;
    }
  }

  void add_edge(ll s, ll t, ll cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }

  void dijkstra(ll s){
    for(int i = 0; i < V; i++){
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

int main(){
  int from,to,cost,N;
  cin >> N ;
  graph g(N);

  for(int i = 0; i < N-1; i++){
    cin >> from >> to >> cost;
    from --; to --;
    g.add_edge(from,to,cost);
    g.add_edge(to,from,cost);
  }
  int Q,K,x,y;
  cin >> Q >> K;

  K--;
  g.dijkstra(K);

  for(int i = 0; i < Q; i++){
    cin >> x >> y;
    x--; y--;
    long long ans = g.d[x] + g.d[y];
    cout << ans << endl;;
  }
  return 0;
}
