#include <iostream>

using namespace std;

int main(){
  int a,b,c,d,ans;
  cin >> a >> b >> c >> d;
  ans = min(a,b) + min(c,d);
  cout << ans << endl;
  return 0;
}
