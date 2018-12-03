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

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
const int mod = 1e9 + 7;
long long dp[101010][2][2][2];
int main(){
  string A,B;
  cin >> A >> B;
  long long nMax = B.size();
  for(int i = A.size(); i < nMax; i++) A.insert(0,"0");
  //cout << A << endl << B << endl;
  dp[0][0][0][0] = 1;
  for(int i = 0; i < nMax; i++) for(int j = 0; j < 2; j++) for(int k = 0; k < 2; k++) for(int l = 0; l < 2; l++){
    int limUpper;
    int limLower;
    if(j) limUpper = 9;
    else  limUpper = B[i] - '0';

    if(k) limLower = 0;
    else  limLower = A[i] - '0';

    for(int d = limLower ; d <= limUpper ; d++){
      (dp[i+1][j || d < limUpper][k || d > limLower][ l || d == 4 || d == 9] += dp[i][j][k][l] );// %= mod;
    }
  }
  long long ans = 0;
  for(int j = 0; j < 2; j++) for(int k = 0; k < 2; k++){
    (ans += dp[nMax][j][k][1]);// %= mod;
  }
  cout << ans << endl;
  return 0;
}
