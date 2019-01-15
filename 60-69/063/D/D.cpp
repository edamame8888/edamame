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

ll N,A,B;
VI h(1e5+10);

bool enough(ll t){
  ll cnt = 0;
  rep(i,N){
    cnt += max( ((h[i] - B*t) + (A-B-1)) / (A-B),0LL);
  }
  //cout << "t:" << t << "cnt: " << cnt << endl;
  return (cnt<=t)?true:false;
}

int main(){

  cin >> N >> A >> B;

  rep(i,N){
    cin >> h[i];
  }

  ll high = 1e9, low  = 0, mid;

  rep(i,log2(1e10)){
    mid = ( high + low )/2;
    if(enough(mid)){high = mid; /*cout << "Yes" << endl;*/}
    else low = mid;;
  }
  cout << high << endl;
  return 0;
}
