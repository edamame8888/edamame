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
  int l[3];
  for (int i = 0; i < 3; i++) {
    cin >> l[i];
  }
  sort(l,l+3);
  if(l[0] == l[1]) cout << l[2] << endl;
  else cout << l[0] << endl;
  return 0;
}
