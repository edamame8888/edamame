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
  cin >> n;
  vector<int> a(n);
  vector<int> cost(n,0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  cost[0] = 0;
  cost[1] = abs(a[0]-a[1]);

  for(int i = 2; i < n; i++){
    cost[i] = min(abs(a[i]-a[i-1])+ cost[i-1], abs(a[i]-a[i-2]) + cost[i-2]);
  }
  cout << cost[n-1] << endl;
  return 0;
}
