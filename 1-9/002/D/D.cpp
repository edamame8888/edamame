#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;
/*
考察
Nの制約が12と小さいため、全探索を行う
作成したビット配列に対応する議員が、
ビット配列が真になっている人と友達かどうか調べる。
*/
int main(){
  //input
  int N,M;
  cin >> N >> M;

  vector< vector<bool> > graph(N,vector<bool>(N,false));

  rep(i,N) graph[i][i] = true;

  rep(i,M){
    int a, b;
    cin >> a >> b;
    a --; b --;
    graph[a][b] = true;
    graph[b][a] = true;
  }

  vector<bool> check(N);
  int ans = 1;
  rep(i,1 << N){
    fill(all(check),false);
    int tmp = i;
    int member = 0, cnt = 0;
    while(tmp != 0){
      if(tmp % 2 == 1) {
        check[cnt] = true;
        member++;
      }
      tmp /= 2;
      cnt ++;
    }
    rep(j,N){
      if(check[j] == false) continue;
      FOR(k,j+1,N){
        if(check[k] == false) continue;
        if(graph[j][k] == false) {
          member = 0;
        }
      }
    }
    ans = max(member,ans);
    //if(member == 2) cout << i << endl;
  }

  cout << ans << endl;
  return 0;
}
