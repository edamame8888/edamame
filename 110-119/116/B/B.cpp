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
ll s;

ll f(ll n){
  if(n%2==0) return n/2;
  else return 3*n+1;
}
int main(){
  cin >> s;
  map<ll,ll> m;
  m[s] = 1;
  ll prev = s;
  FOR(i,2,1000001){
    prev = f(prev);
    if(m[prev] > 0){
      cout << i << endl;
      return 0;
    }
    m[prev]++;
  }

  return 0;
}
