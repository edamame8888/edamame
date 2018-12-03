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
  ll dp[H+2][W];
  rep(i,H+2)rep(j,W) dp[i][j] = 0;
  dp[0][0] = 1;

  int fib[] = {1,1,2,3,5,8,13,21,34,55};
  rep(i,H){
    rep(j,W){
        //生成できるあみだくじのパターンかどうか
        if(j < W-1){
          //右のあみだから配られる数
          dp[i+1][j+1] = (dp[i+1][j+1] + dp[i][j]) * fib[j+1] % mod;

        }else if(j - 1 >= 0 ){
          //左のあみだから配られる数
          dp[i+1][j-1] = (dp[i+1][j-1] + dp[i][j]) * fib[j-1]% mod;
        } else {
          //真っ直ぐに降りてくるあみだから配られる数
          dp[i+1][j]   = (dp[i+1][j] + dp[i][j]) * fib[j] % mod;
        }

    }
  }
  cout << dp[H][K] << endl;
  return 0;
}
