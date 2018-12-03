#include <iostream>

using namespace std;

long long cub(int x){
  return 1ll * x * x * x;
}
int main(){
  int n,k;
  cin >> n >> k;
  if(k & 1){// k % 2 == 1 の時をビット演算によって高速で分岐
    //a,b,cが全て 0 mod(K)
    cout << cub(n/k) << endl;
  }else{
    k /= 2;
    // a,b,cが全て K/2 mod(K) の時と a,b,c が全て 0 mod(K) の場合
    cout << cub((n+k)/k/2) + cub(n/k/2) << endl;
  }

  return 0;

}
