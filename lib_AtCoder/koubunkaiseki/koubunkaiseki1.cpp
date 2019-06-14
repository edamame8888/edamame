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

//const value
//const ll MOD = 1e9 + 7;
//const int dx[] = {0,1,0,-1};//{0,0,1,1,1,-1,-1,-1};
//const int dy[] = {1,0,-1,0};//{1,-1,0,1,-1,0,1,-1};

//conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
inline ll toLL(string s) {ll v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

typedef string::const_iterator State;
int expression(State &begin);
int number(State&);
int factor(State&);
int term(State&);
int expression(State&);

int number(State &begin){
  int ret = 0;
  while(isdigit(*begin)){
    ret *= 10;
    ret += *begin - '0';
    begin++;
  }
  return ret;
}

// 括弧か数をパースして、その評価結果を返す。
int factor(State &begin) {
    if (*begin == '(') {
        begin++;
        int ret = expression(begin);
        begin++;
        return ret;
    } else {
        return number(begin);
    }
    return -1;
}

int term(State & begin){
  int ret = factor(begin);
  while(true){
    if(*begin == '*'){
      begin++;
      ret *= factor(begin);
    } else if (*begin == '/') {
      begin++;
      ret /= factor(begin);
    } else {
      break;
    }
  }
  return ret;
}

int expression(State &begin){
  int ret = term(begin);
  while(true){
    if(*begin == '+'){
      begin++;
      ret += term(begin);
    } else if (*begin == '-') {
      begin++;
      ret -= term(begin);
    } else {
      break;
    }
  }
  return ret;
}

int main(){
  int N;
  cin >> N;
  rep(i,N){
    string s;
    cin >> s;
    if(s.size() > 0) s = s.substr(0,s.size()-1);
    State begin = s.begin();
    int ans = expression(begin);
    cout << ans << endl;
  }
  return 0;
}
