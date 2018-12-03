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
  long ans = 0;
  int N,M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> S(N+1);
  map<int, int> mod_map;
  mod_map[0] = 1;
  S[0] = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    S[i+1] = (A[i] + S[i]) % M;
    ans += mod_map[S[i+1]];
    mod_map[S[i+1]]++;
  }
  cout << ans << endl;
  return 0;
}
