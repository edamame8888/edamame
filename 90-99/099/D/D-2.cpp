#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const int INF = 1e8;
using namespace std;

int main(){
  int N;
  cin >> N;
  // make coin array
  vector<int> coin;
  coin.push_back(1);
  for(int i = 1; N >= pow(6,i); i++){
    coin.push_back(pow(6,i));
  }
  for(int i = 1; N >= pow(9,i); i++){
    coin.push_back(pow(9,i));
  }

  //make dp table
  int coinNum = coin.size();
  int dp[coinNum + 1][N+1];
  rep(i,coinNum+1)rep(j,N+1) dp[i][j] = INF;
  dp[0][0] = 0;
  
  FOR(i,1,coinNum+1){// i = 何種類のコインを見たか
    rep(j,N+1){
      //if(j - coin[i-1] >= 0) cout << dp[i-1][j] << ',' << dp[i][j - coin[i-1]] + 1 << endl;
      if(j - coin[i-1] >= 0) dp[i][j] = min(dp[i-1][j] , dp[i][j - coin[i-1]] + 1);
      else                   dp[i][j] = dp[i-1][j];
    }
  }

  cout << dp[coinNum][N] << endl;
  return 0;
}
