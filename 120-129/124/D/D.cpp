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
  int N, cmd;
  stirng str;
  cin >> N >> cmd >> str;

  ll left = 0,right = 0;
  int cmdCnt = 0, cnt = 0;
  bool flag == false;
  ll maxLength = 0;

  rep(right,n){
    if(flag){//0が連続している
      if(str[i] != 0){
        flag = false;
      }
      right++;
    }
    else{
      if(str[i] == 0){
        if(cmdCnt == cmd) break;
        else{
          cmdCnt++;
          flag = true;
          right ++;
        }
      }
      else{right++}
    }
  }
  cout << right << endl;

  return 0;
}
