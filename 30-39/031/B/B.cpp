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
  int l,h,n,a;
  cin >> l >> h >> n;
  for(int i = 0; i < n; i++){
    cin >> a;
    if(a > h) cout << -1 << endl;
    else if(a < l) cout << l - a << endl;
    else cout << 0 << endl;
  }
  return 0;
}
