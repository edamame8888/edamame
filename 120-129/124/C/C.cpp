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
  string S;
  cin >> S;

  ll first0cnt = 0, first1cnt = 0;

  rep(i,S.size()){
    if(i % 2 == 0){
      if(S[i] == '0'){
        first1cnt++;
      }else{
        first0cnt++;
      }
    }else{
      if(S[i] == '0'){
        first0cnt++;
      }else{
        first1cnt++;
      }
    }
  }
  cout << min(first0cnt,first1cnt) << endl;
  return 0;
}
