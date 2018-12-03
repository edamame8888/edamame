#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  int n,m;
  cin >> n >> m;
  vector<int> island(n,0);
  rep(i,m){
    int a,b;
    cin >> a >> b;
    a--;  b--;
    //cout << a << ' ' << b << endl;
    if(a == 0){
      island[b]++;
      if(island[b] == 2){
        cout << "POSSIBLE" << endl;
        return 0;
      }
    }else if(b == n-1){
      island[a]++;
      if(island[a] == 2){
        cout << "POSSIBLE" << endl;
        return 0;
      }
    }
  }
  
  cout << "IMPOSSIBLE" << endl;
  return 0;
}
