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
  int n, input, ans = 0;
  cin >> n;
  map<int,int> A;
  for(int i = 0; i < n; i++){
    cin >> input;
    if(A[input] > 0) ans++;
    else A[input]++;
  }
  cout << ans << endl;
  return 0;
}
