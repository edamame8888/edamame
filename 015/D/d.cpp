#include <iostream>
#include <algorithm>

using namespace std;

int W,N,K;//max_width inputNum pageLimit
int A[51]; //width
int B[51]; //values
int dp[51][51][10001]; //dp[入力をチェックする残りの数][今まで使った枚数][幅の最大値] = values
/*
漸化式
dp[n][k][j] = 0
dp[i][0][j] = 0


dp[i][j][k] =   +--- dp[i+1][j][k] (k < A[i])
                +--- max(dp[i+1][j][k],dp[i+1][j - 1][k-w[i]] + v[i]) (それ以外)
*/
void solve(){
      for(int i = N-1; i >= 0; i--){ //入力をチェックする残りの数
        for(int j = 1; j <= K ; j++){ //今まで使った枚数
          for(int k = 1; k <= W; k++) //幅の合計値
          if(k < A[i]){
              dp[i][j][k] = dp[i+1][j][k];
            }else{
              dp[i][j][k] = max(dp[i+1][j][k],dp[i+1][j - 1][k-A[i]] + B[i]);
            }
        }
      }
      int ans = -1;
      for(int num = 1; num <= K; num++) ans = max(ans, dp[0][num][W]);

      cout << ans << endl;
}

int main(){
  cin >> W >> N >> K;
  
  for(int input = 0; input < N; input++){
    cin >> A[input] >> B[input] ;
  }
  solve();
  return 0;
}
