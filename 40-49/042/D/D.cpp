#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
typedef long long ll;

#define MOD (long)(1e9 + 7)

long long modPow(int x, int n){
  if(n == 0) return 1;
  if(n % 2 == 0) {
    long long sqrtX = modPow(x,n/2);
    return sqrtX * sqrtX % MOD ;
  }else{
    return x * modPow(x,n-1) % MOD;
  }
}
ll kaizyouArray[300000];
long long kaizyou(long long x){
  return kaizyouArray[x];
}

long long modCombi(long long a, long long b){
  if(b > a/2) return modCombi(a,a-b);
  return ((kaizyou(a) * modPow(kaizyou(b),MOD - 2)) % MOD)* modPow(kaizyou(a-b),MOD - 2) % MOD;
}

int main(){
  ll H,W,A,B;
  cin >> H >> W >> A >> B;
  kaizyouArray[0] = 1; kaizyouArray[1] = 1;
  FOR(i,2,300000) kaizyouArray[i] = (kaizyouArray[i-1]*i) % MOD;
  ll ans = 0;
  rep(i,H-A){
    ans += modCombi(B+i-1,B-1) * modCombi((H-i+W-B-2),(H-i-1));
    ans = ans % MOD;
  }
  cout << ans << endl;
  return 0;
}
