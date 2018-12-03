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

#define N_MAX 100

int main(){
  int N, ans = N_MAX, input;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> input;
    ans = min(ans , input);
  }
  cout << ans << endl;
  return 0;
}
