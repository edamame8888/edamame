#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
typedef long long ll;

int main(){
  ll N,T,ans = 0;
  cin >> N >> T;
  ll t;
  ll stopTime = 0;
  ll startTime = 0;
  rep(i,N){
    cin >> t;
    if(t <= stopTime){
      stopTime = t + T;
    }else{
      ans += stopTime - startTime;
      startTime = t;
      stopTime = t + T;
    }
  }
  ans += stopTime - startTime ;
  cout << ans << endl;
  return 0;
}
