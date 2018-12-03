#include <bits/stdc++.h>

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
int dp[101010][2][10];
const int mod = 1e9 + 7;
int main(){
  string N;
  cin >> N;
  int len = N.size();
  dp[0][0][0] = 1;

  for(int i = 0; i < len; i++){
    for(int j = 0; j < 2; j++){
      for(int k = 0; k <= len; k++){
        int lim;
        if(j) lim = 9;
        else  lim = N[i] - '0';

        for(int d = 0; d <= lim; d++){
          if(d == 1)(dp[i+1][j || d < lim][k+1] += dp[i][j][k]);
          else (dp[i+1][j || d < lim][k] += dp[i][j][k]);
        }
      }
    }
  }
  long long ans = 0;
  for(int j = 0; j < 2; j++){
    for(int k = 1; k <= len; k++){
      (ans += k * dp[len][j][k]) ;
    }
  }
  cout << ans << endl;
  return 0;
}
