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
VI l(8);
ll N;
VI target(3);

ll dfs(int n, VI len, int margeTime){

  if(n == N){
    rep(i,3){
      if(len[i] == 0) return 1e9;
    }

    ll ans = 0;
    rep(i,3) ans += abs(len[i] - target[i]);
    ans += (margeTime-3) * 10;
    return ans;

  }else{
    VI res(4);
    //そのまま
    res[3] = dfs(n+1,len,margeTime);
    // marge
    rep(i,3){
      len[i] += l[n];
      res[i] = dfs(n+1,len,margeTime+1);
      len[i] -= l[n];
    }
    int min_res = 1e9;
    rep(i,4) min_res = min(min_res,res[i]);

    return min_res;
  }
}
int main(){
  cin >> N;
  rep(i,3) cin >> target[i];
  rep(i,N) cin >> l[i];
  VI len(3,0);
  cout << dfs(0,len,0) << endl;

  return 0;
}
