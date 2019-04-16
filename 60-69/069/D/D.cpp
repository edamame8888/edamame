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
  int H,W,n;
  cin >> H >> W >> n;
  VI a(n);
  int board[H][W];
  rep(i,n) cin >> a[i];
  int index = 0;
  rep(i,H){
    if(i%2 == 0){
      rep(j,W){
        board[i][j] = index+1;
        a[index]--;
        if(a[index] == 0) index++;
      }
    }else{
      for(int j = W-1; j >= 0; j--){
        board[i][j] = index+1;
        a[index]--;
        if(a[index] == 0) index++;
      }
    }

  }

  rep(i,H){
    rep(j,W){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}