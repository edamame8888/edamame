#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

typedef long long ll;
int main(){
  ll x, ans = 0;
  cin >> x;
  ans += (x / 11) * 2;
  x = x % 11;
  if(x == 0)     cout << ans << endl;
  else if(x > 6) cout << ans + 2 << endl;
  else           cout << ans + 1 << endl;

  return 0;
}
