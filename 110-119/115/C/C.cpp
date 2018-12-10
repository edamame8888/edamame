#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
typedef long long ll;


int main(){
  int n,k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i,n){
    cin >> h[i];
  }
  sort(all(h));
  int ans = 1e9;
  rep(i,n){
    if(i+k-1 < n){
      ans = min(ans,abs(h[i]-h[i+k-1]));
    }
  }
  cout << ans << endl;
  return 0;
}
