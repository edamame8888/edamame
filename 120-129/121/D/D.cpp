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
    ll x,y,z,k;
    cin >> x >> y >> z >> k;
    VLL a(x);
    VLL b(y);
    VLL c(z);

    rep(i,x) cin >> a[i];
    rep(i,y) cin >> b[i];
    rep(i,z) cin >> c[i];
    sort(all(a),greater<ll>());
    sort(all(b),greater<ll>());
    sort(all(c),greater<ll>());

    VLL s;
    int index = 0;
    rep(i,min(k,x)){
        rep(j,min(k/(i+1),y)){
            rep(l,min(k/((i+1)*(j+1)),z)){
                s.push_back( a[i] + b[j] + c[l]);
            }
        }
    }
    sort(all(s),greater<ll>());
    rep(i,k){
        cout << s[i] << endl;
    }
    return 0;
}
