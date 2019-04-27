#include <bits/stdc++.h>
using namespace std;

//repetition
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

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
inline ll toLL(string s) {ll v; istringstream sin(s);sin>>v;return v;}
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
ll dp[100000][2];
ll b[100000];
ll e[100000];

int main(){
    ll n;
    cin >> n;
    VLL a(n);
    rep(i,n) cin >> a[i];
    sort(all(a));

    ll gcdNum = a[0];

    rep(i,n){
         gcdNum = gcd(a[i],gcdNum);
         b[i] = gcdNum;
    }
    gcdNum = a[n-1];
    for(int i = n-1; i >= 0; i--){
        gcdNum = gcd(a[i],gcdNum);
        e[i] = gcdNum;
    }
    ll maxGcd = gcdNum;
    rep(i,n){
        if(i == 0) maxGcd = max(maxGcd,e[i+1]);
        else if(i == n-1) maxGcd = max(maxGcd,b[n-2]);
        else  maxGcd = max(maxGcd,gcd(b[i-1],e[i+1]));
    }
    cout << maxGcd << endl;


    return 0;
}
