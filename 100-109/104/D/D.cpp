#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#define MOD (1e9+7)

using namespace std;

string S;

void solve(){
  /*
  dp[何番目の文字まで確認したか][状態]
  状態 0: ABCのうち何も決めていない
  状態 1: Aの位置のみ確定済み
  状態 2: ABの位置のみ確定済み
  状態 3: ABCの位置確定済み
  */
  vector<vector<long>> dp = vector<vector<long>>(S.size()+1,vector<long>(4,0));
  dp[0][0] = 1;
  for(int i = 0; i < S.size(); i++){
    switch (S[i]) {
      case 'A':
        dp[i+1][0] = dp[i][0] ;
        dp[i+1][1] = dp[i][1] + dp[i][0] ;
        dp[i+1][2] = dp[i][2] ;
        dp[i+1][3] = dp[i][3] ;
        break;
      case 'B':
        dp[i+1][0] = dp[i][0] ;
        dp[i+1][1] = dp[i][1] ;
        dp[i+1][2] = dp[i][2] + dp[i][1] ;
        dp[i+1][3] = dp[i][3] ;
        break;
      case 'C':
        dp[i+1][0] = dp[i][0] ;
        dp[i+1][1] = dp[i][1] ;
        dp[i+1][2] = dp[i][2] ;
        dp[i+1][3] = dp[i][3] + dp[i][2] ;
        break;
      case '?':
        dp[i+1][0] = dp[i][0] * 3;
        dp[i+1][1] = 3 * dp[i][1] + dp[i][0] ;
        dp[i+1][2] = 3 * dp[i][2] + dp[i][1] ;
        dp[i+1][3] = 3 * dp[i][3] + dp[i][2] ;
        break;
    }
    for(int j = 0; j < 4; j++) dp[i+1][j] = dp[i+1][j] % (int)MOD ;

  }
  cout << dp[S.size()][3] << endl;
}
int main(){
  cin >> S;
  solve();
  return 0;
}
