#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  long long a,b,x;
  cin >> a >> b >> x;
  long long ans = b/x - max((long long)0,a-1) / x;
  if(a == 0 ) ans++;
  cout <<  ans << endl;
}
