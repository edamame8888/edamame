#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int x , t;
  cin >> x >> t;
  int ans = max(0,x-t);
  cout << ans << endl;
  return 0;
}
