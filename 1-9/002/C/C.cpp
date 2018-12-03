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
  double ax , ay , bx , by , cx , cy;
  double a,b,c,d;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  a = bx - ax;
  b = by - ay;
  c = cx - ax;
  d = cy - ay;
  double ans = abs(a*d - b*c)/2;
  printf("%f\n",ans);
  return 0;
}
