#include <bits/stdc++.h>
using namespace std;

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

//container util
#define all(x) (x).begin(),(x).end()

//typedef
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
#define _A 0
#define _G 1
#define _C 2
#define _T 3
int mod = 1e9+7;
//conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

int dp[101][4][4][4];

int main(){
  int n;
  cin >> n;
  dp[0][3][3][3] = 1;

  rep(len,n){
    rep(prev3,4){
      rep(prev2,4){
        rep(prev1,4){
          rep(word,4){
            if(dp[len][prev3][prev2][prev1] == 0) continue;

            if( prev3 == _A && prev1 == _G && word == _C) continue;
            if( prev2 == _A && prev1 == _C && word == _G) continue;
            if( prev2 == _G && prev1 == _A && word == _C) continue;
            if( prev2 == _A && prev1 == _G && word == _C) continue;
            if( prev3 == _A && prev2 == _G && word == _C) continue;

            dp[len+1][prev2][prev1][word] += dp[len][prev3][prev2][prev1];
            dp[len+1][prev2][prev1][word] %= mod;

          }
        }
      }
    }
  }
  int ans = 0;
  rep(prev3,4){
    rep(prev2,4){
      rep(prev1,4){
        ans += dp[n][prev3][prev2][prev1];
        ans %= mod;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
