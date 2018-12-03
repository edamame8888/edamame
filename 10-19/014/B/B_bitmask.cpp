#include <iostream>

using namespace std;

int main(){
  int n,X;
  cin >> n >> X;
  int ans = 0;
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    if( X >> i & 1) ans += a;
  }
  cout << ans << endl;
  return 0;
}
