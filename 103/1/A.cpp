#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int a[3];
bool flag[3];
void solve(){
  int ans = 10000;
  ans = min(ans, abs(a[0] - a[1]) + abs(a[1] - a[2])) ;
  ans = min(ans, abs(a[0] - a[2]) + abs(a[2] - a[1])) ;
  ans = min(ans, abs(a[1] - a[0]) + abs(a[0] - a[2])) ;
  ans = min(ans, abs(a[1] - a[2]) + abs(a[2] - a[0])) ;
  ans = min(ans, abs(a[2] - a[0]) + abs(a[0] - a[1])) ;
  ans = min(ans, abs(a[2] - a[1]) + abs(a[1] - a[0])) ;
  cout << ans << endl;
  
  return ;
}
int main(){
  cin >> a[0] >> a[1] >> a[2];
  solve();
  return 0;
}
