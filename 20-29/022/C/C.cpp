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
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

typedef vector<vector<int> > Matrix;
const int INF = 200000000;
Matrix d; // graphの距離を格納した2次元配列
          // d[u][v] は辺e=(u,v) のコスト(辺が存在しない場合はINF、ただしd[i][i] = 0)

void warshall_floyd(int n) { //nは頂点数
    for(int i = 0; i < n; i++)      // 経由する頂点
      for(int j = 0; j < n; j++)    // 開始頂点
        for(int k = 0; k < n; k++)  // 終端
          d[j][k] = min(d[j][k] , d[j][i] + d[i][k]);
}

int main(){
  int N,M;
  cin >> N;

  d = Matrix(N, vector<int>(N, INF));
  for(int i = 0; i < N; i++) d[i][i] = 0;

  cin >> M;
  vector<pair<int,int>> from0dist;
  // 頂点0(0index)の隣接頂点のみ切り分けて考える
  for(int i = 0; i < M; i++){
    int from, to, cost;
    cin >> from >> to >> cost;
    from --;
    to --;
    if(from == 0) {
      pair<int ,int> dist;
      dist.first = to;
      dist.second = cost;
      from0dist.push_back(dist);
    }else{
      d[from][to] = cost;
      d[to][from] = cost;
    }
  }

  warshall_floyd(N);

  int ans = INF;
  //1の隣接頂点の中から2つを決めてその距離隣接辺を加算
  for(int i = 0; i < from0dist.size() ; i++){
    for(int j = i + 1; j < from0dist.size(); j++){
      int from = from0dist[i].first;
      int to   = from0dist[j].first;
      //cout << "from =" << from + 1 << " to = " << to + 1 << " "<< d[from][to] << endl;
      ans = min(ans,from0dist[i].second + from0dist[j].second + d[from][to]);
    }
  }
  if(ans < INF) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}
