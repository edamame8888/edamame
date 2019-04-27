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

ll dp[100001][2];
int main(){
    int n;
    cin >> n;
    VLL a(n);
    rep(i,n) cin >> a[i];


    dp[0][1] = -a[0];
    dp[0][0] = a[0];
    FOR(i,1,n){
        //使わない
        dp[i][0] = max(dp[i-1][0]+a[i],dp[i-1][1]-a[i]);
        dp[i][1] = max(dp[i-1][0]-a[i],dp[i-1][1]+a[i]);
    }
    cout << dp[n-1][0] << endl;
    return 0;
}
