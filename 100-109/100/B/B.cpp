#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int d , n;

void solve(){
  int ans;
  if(n < 100) ans = pow(100,d) * n;
  else ans = pow(100,d) * (n+1) ;
  cout << ans << endl;
  return;
}
int main(){
  cin >> d >> n ;
  solve();
  return 0;
}
