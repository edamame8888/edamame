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
  string str,ans = "";
  int cnt = 0;

  cin >> str;
  char alph = str[0];

  for(int i = 0; i < str.size(); i++){

    if(alph == str[i]) cnt++;
    else{
      ans += alph + to_string(cnt);
      cnt = 1;
      alph = str[i];
    }
  }
  ans += alph + to_string(cnt);
  cout << ans << endl;
  return 0;
}
