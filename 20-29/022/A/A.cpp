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
  long n,s,t,w,a;
  int cnt = 0;
  cin >> n >> s >> t >> w;
  if(s <= w && w <= t) cnt++;
  for(int i = 0; i < n-1; i++){
    cin >> a;
    w += a;
    if(s <= w && w <= t) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
