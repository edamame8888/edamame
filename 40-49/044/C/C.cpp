#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int N,A;
int x[50];
long dp[51][51][3010];
/*
考察ノート

全探索では O(2^n) = 2**50 > 10^9 のためTLE
もっと計算が早い方法を使う -> DP を使う
DPを使う為に部分問題に分解する-> 漸化式を立てる。

dp[i][j][k] = i枚目までのカードでj枚選んで合計がkである組合せ
カードを選ばない dp[i + 1][j][k] += dp[i][j][k]
カードを選ぶ  dp[i + 1][j + 1][k + x[i]] += dp[i][j][k]

*/
void solve_dp(){
  dp[0][0][0] = 1;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      for(int k = 0; k <= 2500; k++){
        dp[i+1][j][k] += dp[i][j][k]; //カードを選ばない
        dp[i+1][j+1][k + x[i]] += dp[i][j][k]; //カードを選ぶ
      }
    }
  }

  long long ans = 0;
	for(int i = 1; i <= N; i++) ans += dp[N][i][i*A];
  cout << ans << endl;
  return ;
}


int main(){
  cin >> N >> A;
  for(int i = 0; i < N; i++){
    cin >> x[i] ;
  }
  solve_dp();
  return 0;
}
