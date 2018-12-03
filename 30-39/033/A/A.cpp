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
  string n;
  char w;
  cin >> n;
  for (int i = 0; i < n.size(); i++) {
    if(i == 0) w = n[i];
    else if(n[i] == w) continue;
    else{
      cout << "DIFFERENT" << endl;
      return 0;
    }
  }
  cout << "SAME" << endl;
  return 0;
}
