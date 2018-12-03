#include <bits/stdc++.h>

using namespace std;
#define FOR(i,a,b) for(long long i=(a);i<(b);++i)
#define rep(i, n) for(long long i = 0; i < (long long)(n); i++)
#define all(x) (x).begin(),(x).end()


#define MOD (long long)(1e9 + 7)

long long modPow(long long x, long long n){
  if(n == 0) return 1;
  if(n % 2 == 0) {
    long long sqrtX = modPow(x,n/2);
    return sqrtX * sqrtX % MOD ;
  }else{
    return x * modPow(x,n-1) % MOD;
  }
}

long long kaizyou(long long x){
  long long res = 1;
  for(int i = 1; i <= x; i++){
    res = (res * i) % MOD;
  }
  return res;
}
// 二項係数計算
long long COM(int n, int k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	if (k == 0) return 1;
	return n * COM(n - 1, k - 1) / k;
}


int main(){
  long long N,A,B;
  //------input------
  cin >> N >> A >> B;
  vector<long long> v(N);
  rep(i,N) cin >> v[i];
  //------sort------
  sort(all(v),greater<long long>());

  //select A time
  double avg = 0;
  long long pattern = 0;
  rep(i,A){
    avg += v[i];
    if(v[A-1] == v[i]) pattern++;
  }
  printf("%lf\n",avg/(double)A);

  bool sameNumFlag = 0;
  if(A == pattern) sameNumFlag = true;

  long long pattern2 = 0;
  FOR(i,A,v.size()){
    if(v[i] == v[A-1]) pattern2++;
    else break;
  }

  long long ans = 0;
  if(sameNumFlag){
    FOR(i,pattern,min(B,pattern2 + pattern) + 1){
      ans += COM(pattern2 + pattern, i );
      //cout << ans << endl;
    }
    //cout << "pass1" << endl;
  }else{
    ans = COM(pattern+pattern2,pattern);
    //cout << pattern << ' ' << pattern2 << endl;;
  }
  cout << ans << endl;
  return 0;
}
