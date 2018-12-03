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
  double h,m;
  cin >> h >> m;
  h = (int)h % 12; //max 24hour -> max 12hour
  h = ( h * 60 + m ) / (12 * 60.) * 360;
  m = m / 60. * 360;

  printf("%f\n",min(abs(h-m),360 - abs(h-m))); 
  return 0;
}
