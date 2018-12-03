#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){
  int D,G;
  cin >> D >> G;
  int p[D], c[D];
  rep(i,D) cin >> p[i] >> c[i];

  //compleat pattern
  int ans = 10000;
  bool comp[D];
  rep(i,1<<D){
    int score = 0;
    int solveCnt = 0;
    int x = i;
    int cnt = 0;
    fill(comp,comp+D,false);
    while(x > 0){
      if(x % 2) comp[cnt] = true;
      x /= 2;
      cnt ++;
    }
    rep(j,D){
      if(comp[j]){
        solveCnt += p[j];
        score += c[j] + p[j] * (j+1) * 100;
      }
    }
    if(score >= G) ans = min(ans,solveCnt);

    for(int j = D-1; j >= 0; j --){
      if(comp[j] == false)
      rep(k,p[j]){
        score += 100 * (j+1);
        solveCnt ++;
        if(score >= G) ans = min(ans,solveCnt);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
