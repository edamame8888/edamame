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
  ll n,m;
  cin >> n >> m;
  vector<PLL> ab(n);

  rep(i,n){
    cin >> ab[i].first >> ab[i].second;
  }

  sort(all(ab));

  ll ans = 0;
  ll cnt = 0;
  rep(i,n){
    if(cnt + ab[i].second < m){
      //buy all
      ans += ab[i].first * ab[i].second;
      cnt += ab[i].second;
      continue;
    }else{
      ans += ab[i].first *(m-cnt);
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
