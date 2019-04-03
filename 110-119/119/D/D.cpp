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
  int A,B,Q;
  cin >> A >> B >> Q;
  VLL s(A), t(B), x(Q);
  rep(i,A) cin >> s[i];
  rep(i,B) cin >> t[i];
  rep(i,Q) cin >> x[i];

  rep(i,Q){
    vector<long long>::iterator it_s = lower_bound(all(s),x[i]);
    vector<long long>::iterator it_t = lower_bound(all(t),x[i]);
    VLL target_s, target_t;
    if(it_s != s.end())   target_s.push_back(*it_s);
    if(it_t != t.end())   target_t.push_back(*it_t);
    if(it_s != s.begin()) {
      --it_s;
      target_s.push_back(*it_s);
    }
    if(it_t != t.begin()){
      --it_t;
      target_t.push_back(*it_t);
    }


    ll min_cost = 1e15;
    //cout << i <<"-----------------" << endl;
    rep(j,target_s.size()) rep(k,target_t.size()){
      //cout << x[i] << " -> " << << " -> " <<
      min_cost = min(min_cost, abs(x[i] - target_s[j]) + abs(target_t[k] - target_s[j]));
      min_cost = min(min_cost, abs(x[i] - target_t[k]) + abs(target_t[k] - target_s[j]));
    }
    cout << min_cost << endl;
  }
  return 0;
}
