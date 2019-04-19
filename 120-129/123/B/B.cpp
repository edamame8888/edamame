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
    VI array(5);
    ll ans = 0;
    int minNum = 10;
    rep(i,5){
        cin >> array[i];
        if(array[i] % 10 != 0 ) minNum = min(array[i]%10,minNum);
    }

    rep(i,5){
        if(array[i] % 10 != 0) ans += array[i]/10 * 10 + 10;
        else ans += array[i];
    }


    cout << ans - (10-minNum)<< endl;
    return 0;
}
