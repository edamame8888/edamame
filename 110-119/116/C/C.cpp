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
  string s;
  long long k;
  cin >> s >> k;

  for(int i = 0; i < s.size(); i++){
    if(s[i] != '1'){
      cout << s[i] << endl;
      return 0;
    }else if(k - 1 == 0){
      cout << 1 << endl;
      return 0;
    }else{
      k --;
    }
  }

  return 0;
}
