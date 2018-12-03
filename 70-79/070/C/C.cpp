#include <iostream>

using namespace std;

long long gcd( long long m, long long n ){

  if ( n == 0) return m;
  return gcd(n,m%n);
}//gcd

long long lcm( long long m, long long n ){
  // 引数に０がある場合は０を返す
  if ( ( 0 == m ) || ( 0 == n ) ) return 0;

  return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}//lcm

int main(){
  int N;
  long long T,ans = 1;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> T;
    ans = lcm(T,ans);
  }
  cout << ans << endl;
}
