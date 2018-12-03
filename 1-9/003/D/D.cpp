#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

#define MOD (long)(1e9 + 7)

long long modPow(int x, int n){
  if(n == 0) return 1;
  if(n % 2 == 0) {long long res = modPow(x,n/2); return res * res % MOD;}
  return modPow(x,n-1) * x % MOD;
}

long long kaizyou(int x){
  long long res = 1;
  for(int i = x; i > 0; i--){
    res = res * i % MOD;
  }
  return res;
}

long long modComb(int x, int y){
  if( x/2 < y ) return modComb(x,x-y);
  return (kaizyou(x) * modPow(kaizyou(x-y),MOD-2) % MOD) * modPow(kaizyou(y),MOD-2) % MOD;
}

const int mod = 1e9 + 7;
int main(){
  long long R,C,X,Y,D,L;
  cin >> R >> C >> X >> Y >> D >> L;

  long long ans = (R-X+1)*(C-Y+1);
  ans = (ans * modComb(X*Y,L)) % mod;

  cout << ans << endl;
  return 0;
}
