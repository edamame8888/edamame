#include <iostream>
#include <vectore>

using namespace;

/*
高橋君は、これらのカードの中から 1枚以上を選び、 選んだカードに書かれた整数の平均をちょうど
Aにしたいと考えています。 そのようなカードの選び方が何通りあるか求めてください。
*/

long dp[51][2510]; //dp[参照したカード数][平均からカードの数字を引いた和] = カードの枚数
/*
  x[k] == 0
  dp[i][j] = dp[i][j] +1
  x[k] != 0
  dp[i][j + x[j]] = dp[i][j] + 1
*/
long x[51];
int main(){

  cin >> N >> A;
  for(int i = 0; i < N; i++){
    cin >> x[i];
    x[i] -= A;
  }
  //dp 初期化
  dp[0][0][0] = 1;
  for(int i = 0; i < N; i++ ){
    for(int j = 0; j < N; j++){
      for(int j = 0; j < N; j++){
        dp[i+1][k] += dp[i][k]; //カードを選ばない
        dp[i+1][k + x[i]] += dp[i][k]; //カードを選ぶ
      }
    }
  }
  cout << dp[N][0] << endl;
  return 0;
}
