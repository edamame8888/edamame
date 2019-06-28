#include <bits/stdc++.h>
using namespace std;

struct StronglyConnectedComponents
{
  int n;
  vector<vector<int>> oG, rG;
  vector<int> comp, order, used;
  vector<pair<int, int>> edges;

  StronglyConnectedComponents (int n) : n(n), oG(n), rG(n), comp(n, -1), used(n, 0) {}

  int operator[] (int k)
  {
    return comp[k];
  }

  void add_edge(int u, int v)
  {
    oG[u].push_back(v);
    rG[v].push_back(u);
    edges.emplace_back(u, v);
  }

  void dfs(int v)
  {
    if (used[v]) return;
    used[v] = true;
    for (int to : oG[v]) dfs(to);
    order.push_back(v);
  }

  void rdfs(int v, int k)
  {
    if (~comp[v]) return;
    comp[v] = k;
    for (int to : rG[v]) rdfs(to, k);
  }

  void build(vector<vector<int>> &t)
  {
    for (int i = 0; i < n; ++i) dfs(i);

    reverse(order.begin(), order.end());
    int k = 0;
    for (int i : order) if (comp[i] == -1) rdfs(i, k++);

    t.resize(k);
    set<pair<int, int>> connect;
    for (auto &e : edges) {
      int u = comp[e.first], v = comp[e.second];
      if (u == v || connect.count({u, v})) continue;
      t[u].push_back(v);
      connect.emplace(u, v);
    }
  }
};

/*
StronglyConnectedComponents(g):= グラフ g で初期化する。
build(t):= 強連結成分分解をする。強連結成分の番号はトポロジカル順に昇順にふられる。
tには強連結成分ごとに縮約したグラフが格納される(多重辺が生えるので注意)。
[k] := 頂点 k が属する強連結成分の番号を返す。

int main() {
  int n, m;
  cin >> n >> m;

  StronglyConnectedComponents scc(n);
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    scc.add_edge(u, v);
  }

  vector<vector<int>> G;
  scc.build(G);

  int q;
  cin >> q;
  while (q--) {
    int s, t;
    cin >> s >> t;
    cout << (scc[s] == scc[t]) << endl;
  }
}
*/
