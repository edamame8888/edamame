#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

const int mod = (int)(1e9 + 7);
typedef long long ll;

int main(){
  long long H,W,K;
  cin >> H >> W >> K;
  K--;
  long long dp[H+2][W];
  rep(i,H+2)rep(j,W) dp[i][j] = 0;
  dp[0][0] = 1;
  rep(i,H){
    rep(j,W){
      rep(mask,1 << (W-1)){
        //生成できるあみだくじのパターンかどうか
        bool invalid = false;
        rep(k,(W-1)-1){
          if((mask & (1 << k)) > 0 && (mask & (1 << (k+1))) > 0) invalid = true;
        }
        if(invalid) continue;

        if(j < W-1 && (mask & (1 << j)) > 0){

          dp[i+1][j+1] = (dp[i+1][j+1] + dp[i][j]) % mod;

        }else if(j - 1 >= 0 && (mask & (1 << (j-1))) > 0){

          dp[i+1][j-1] = (dp[i+1][j-1] + dp[i][j]) % mod;

        } else {

          dp[i+1][j]   = (dp[i+1][j] + dp[i][j]) % mod;

        }
      }
    }
  }
  cout << dp[H][K] << endl;
  return 0;
}
