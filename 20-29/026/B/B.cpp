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
  int n;
  double ans = 0;
  cin >> n;
  vector<int> r(n);
  for(int i = 0; i < n; i++) cin >> r[i];
  sort(r.begin(),r.end(),greater<int>());
  for(int i = 0; i < n; i++){
    if(i%2) ans -= (double)(r[i] * r[i]);
    else ans += (double)(r[i] * r[i]);
  }
  printf("%f\n",M_PI*ans);
  return 0;
}
