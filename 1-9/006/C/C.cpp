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
  double N,M,e,a;
  cin >> N >> M;
  for(int b = 0; b < N+1; b++){
    e = M - 2 * N - 2*b;
    a = b + 3 * N - M;
    if(ceil(e) == floor(e) && ceil(a) == floor(a) && a >= 0 && e >= 0){
      cout << a << " " << e << " " << b << endl;
      return 0;
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;

  return 0;
}
