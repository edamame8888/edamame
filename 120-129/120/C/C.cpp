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


//conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}


int main(){
  string s;
  cin >> s;
  ll zero= 0, one = 0;
  ll ans = 0;
  rep(i,s.size()){
    if(s[i] == '0') zero++;
    if(s[i] == '1') one++;
    if(zero > 0 && one > 0){
      ans +=2;
      zero--, one--;
    }
  }
  cout << ans << endl;
  return 0;
}
