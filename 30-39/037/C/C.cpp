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
  int n,k;
  cin >> n >> k;
  long long a[n];
  vector<long long> sumArray(n,0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
    if(i != 0) sumArray[i] = sumArray[i-1] + a[i];
    else sumArray[i] = a[i]; //i == 0
  }

  long long ans = sumArray[k-1];
  for(int i = k; i < n ;i++){
    ans += sumArray[i] - sumArray[i - k];
  }
  cout << ans << endl;
  return 0;
}
