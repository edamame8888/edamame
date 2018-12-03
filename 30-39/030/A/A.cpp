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
  double a, b ,c ,d;
  cin >> a >> b >> c >> d;
  if(b/a == d/c){
    cout << "DRAW" << endl;
  }else if(b/a > d/c) cout << "TAKAHASHI" << endl;
  else cout << "AOKI" << endl;
  return 0;
}
