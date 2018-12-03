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
  int k;
  string s;
  cin >> s >> k;
  set<string> subStr;
  for(int i = 0; i < s.size(); i++){
    if(i+k <= s.size()) subStr.insert(s.substr(i,k));
  }
  cout << subStr.size() << endl;
  return 0;
}
