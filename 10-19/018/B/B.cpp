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
  string  str;
  cin >> str;
  int n, l, r;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> l >> r;
    l--;
    reverse(str.begin() + l, str.begin() + r);
  }
  cout << str << endl;
  return 0;
}
