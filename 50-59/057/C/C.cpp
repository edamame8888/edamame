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
  long N, A, B, ans = 11;
  cin >> N;

  for(A = 1; (A * A) <= N; A++){
    if(N % A != 0) continue;
    else {
      B = N / A;
      if(ans > max((long)log10((double)A) + 1,(long)(log10((double)B)) + 1)){
        ans = max((long)log10((double)A) + 1,(long)(log10((double)B)) + 1);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
