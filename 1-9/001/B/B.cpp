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
  double m;
  cin >> m;
  m /= 1000;
  if(m < 0.1) cout << "00" << endl;
  else if(0.1 <= m && m <= 0.9) cout << "0" <<  m*10 << endl;
  else if(1 <= m && m <= 5) cout << m*10 << endl;
  else if(6 <= m && m <= 30) cout << (int)(m+50) << endl;
  else if(35 <= m && m <= 70) cout << (int)((m - 30) / 5 + 80) << endl;
  else if(70 <= m) cout << 89 << endl;
  return 0;
}
