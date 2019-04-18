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
  int cnt = 0,ans = 0;
  rep(i,s.size()){
    if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'){
      cnt++;
    }else{
      ans = max(ans,cnt);
      cnt = 0;
    }
  }
  ans = max(ans,cnt);
  cout << ans << endl;
  return 0;
}
