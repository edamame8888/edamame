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
  if(n == 100) cout << "Perfect" << endl;
  else if(n >= 90) cout << "Great" << endl;
  else if(n >= 60) cout << "Good" << endl;
  else  cout << "Bad" << endl;

  return 0;
}
