#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a,b,c,d,ans;
  cin >> a >> b >> c >> d;
  ans = max(a*b,c*d);
  cout << ans << endl;
  return 0;
}
