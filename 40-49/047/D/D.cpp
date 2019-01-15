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
  ll N,T;
  cin >> N >> T;
  VI A(N);
  rep(i,N) cin >> A[i];

  int minNum = 1e9+10;
  VLL B(N);
  rep(i,N){
    B[i] = A[i] - minNum;
    minNum = min(minNum,A[i]);
  }
  sort(all(B),greater<ll>());
  ll ans = 1;
  rep(i,N-1){
    if(B[i] == B[i+1]) ans ++;
    else break;
  }
  cout << ans << endl;
  return 0;
}
