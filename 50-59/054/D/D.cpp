#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;
const int INF = 1e8;
int main(){
  int N,Ma,Mb;
  cin >> N >> Ma >> Mb;
  int a[N], b[N], c[N];
  rep(i,N){
    cin >> a[i] >> b[i] >> c[i];
  }
  // ret DPtable
  int dp[N+1][500][500];
  rep(i,N+1)rep(j,500)rep(k,500){
    dp[i][j][k] = INF;
  }
  dp[0][0][0] = 0;

  //make DP table
  rep(i,N)rep(j,500)rep(k,500){
    //choice
    if(dp[i][j][k] != INF){
      dp[i+1][j + a[i]][k + b[i]] = min(dp[i][j+a[i]][k+b[i]] , dp[i][j][k] + c[i]);
    }
    //not choice
    dp[i+1][j][k] = min(dp[i+1][j][k],dp[i][j][k]);
  }


  int ans = INF;
  FOR(j,1,500)FOR(k,1,500){
    if(j % Ma == 0 && k % Mb == 0 && Mb * j == Ma * k )ans = min(ans,dp[N][j][k]);
  }

  if(ans == INF) cout << -1 << endl;
  else  cout << ans << endl;

  return 0;
}
