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
  int n,q;
  cin >> n >> q;
  string s;
  cin >> s;
  VI ACcnt(n,0);
  rep(i,s.size()-1){
    if(s[i] == 'A' && s[i+1] == 'C'){
      ACcnt[i+1] = 1;
    }
  }
  rep(i,n-1){
    ACcnt[i+1] += ACcnt[i];
  }
  rep(i,q){
    int l,r;
    cin >> l >> r;
    l--,r--;
    if(l != 0) cout << ACcnt[r] - ACcnt[l] << endl;
    else cout << ACcnt[r] << endl;
  }
  return 0;
}
