#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int n,k,ans = 0;
  cin >> n >> k;
  int x[n];
  for(int i = 0; i < n; i++){
     cin >> x[i] ;
     ans += 2 * min(k-x[i],x[i]);
  }
  cout << ans << endl;

}
