#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

int main(){
  int n,x,cnt=0,ans=0;
  cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  //i番目のbitが立っていたらa[i]をansに加算
  while(x != 0){
    if(x%2) ans += a[cnt];
    x/=2;
    cnt++;
  }
  cout << ans << endl;
  return 0;
}
