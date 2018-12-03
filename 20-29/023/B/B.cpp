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
  int N;
  string str, s = "b";
  cin >> N >> str;
  for(int i = 1; i < 51; i++){

    if(str == s) {
      cout << i-1 << endl;
      return 0;
    }

    if(i % 3 == 0){
      s = 'b' + s + 'b';
    }else if(i % 3 == 1){
      s = 'a' + s + 'c';
    }else if(i % 3 == 2){
      s = 'c' + s + 'a';
    }

  }
  
  cout << -1 << endl;
  return 0;
}
