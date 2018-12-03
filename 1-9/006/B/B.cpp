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
#define N_MAX (int)1e6
int main(){
  int n;
  vector<int> a(N_MAX);
  a[0] = 0;
  a[1] = 0;
  a[2] = 1;
  for(int i = 3; i < N_MAX; i++){
    a[i] = ( a[i-1] + a[i-2] + a[i-3] ) % 10007;
  }
  cin >> n ;
  cout << a[n-1] << endl;
  return 0;
}
