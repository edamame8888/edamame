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
  cin >> N;
  string s = "";
  if(N == 0){
    cout << 0 << endl;
    return 0;
  }
  while(N != 0){
    if( N % (-2) == 0) s = s + "0";
    else if(N % (-2) == 1) s = s + "1";
    else{
      N = N - 2;
      s = s + "1";
    }

    N /= (-2);
  }
  reverse(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
