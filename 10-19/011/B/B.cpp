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
  string str;
  cin >> str;
  if('a' <= str[0] && str[0] <= 'z') str[0] += 'A' - 'a';
  for(int i = 1 ; i < str.size(); i++) if('A' <= str[i] && str[i] <= 'Z') str[i] += 'a' - 'A';
  cout << str << endl;
  return 0;
}
