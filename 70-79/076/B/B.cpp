#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int n,k,ans = 1;
  cin >> n >> k;
  for(int i = 0; i < n; i ++){
    if(ans*2 < ans+k) ans *= 2;
    else ans += k;
  }
  cout << ans << endl;
}
