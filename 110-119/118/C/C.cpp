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

long long gcd( long long m, long long n ){

  if ( n == 0) return m;
  return gcd(n,m%n);
}//gcd

long long lcm( long long m, long long n ){
  // 引数に０がある場合は０を返す
  if ( ( 0 == m ) || ( 0 == n ) ) return 0;

  return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}//lcm

int main(){
  int n;
  cin >> n;
  VLL a(n);
  rep(i,n){
    cin >> a[i];
  }
  ll ans = a[0];
  rep(i,n){
    ans = gcd(a[i],ans);
  }
  cout << ans << endl;
  return 0;
}
