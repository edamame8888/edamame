#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;


int main(){
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i,n){
    cin >> p[i];
  }
  sort(all(p),greater<int>());
  int ans = 0;
  rep(i,n){
    if(i == 0) ans += p[i]/2;
    else ans += p[i];
  }
  cout << ans << endl;
  return 0;
}
