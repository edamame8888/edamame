#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;

const int INF = 1e9 + 7;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

int main(){
  int N;
  cin >> N;
  int a[N];
  rep(i,N){
    cin >> a[i];
  }
  int dp[3][N+1];
  rep(i,3)rep(j,N+1) dp[i][j] = INF;
  dp[0][0] = 0;

  FOR(i,1,N+1){//上から何番目まで見たか
    FOR(j,0,i+1){//今までにどれだけ連続しているか

      //選ばない
      dp[i%3][j] = dp[(i-1)%3][j];

      //選ぶ
      if(j > 0 && dp[(i+2)%3][j-1] < a[i-1] ){
        dp[i%3][j] = min(dp[(i+2)%3][j], a[i-1]);
      }
      if(j == 0){
        dp[i%3][j] = min(a[i-1],dp[i%3][j]);
      }
    }
    rep(j,N+1) dp[(i+2)%3][j] = INF;
  }
  int maxSeq;
  FOR(i,1,N+1) if(dp[N%3][i] != INF ) maxSeq = i;

  cout << N - maxSeq << endl;
  return 0;
}
