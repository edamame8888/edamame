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
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  long long ans = 0;
  int left = 0,right = 0;
  for(int i = 1; i < n; i++){
    if(a[right] < a[i]){right = i; continue;}
    else{
      long long num = right - left + 1;
      //cout << num;
      ans += (num * (num + 1) ) / 2;
      left = i;
      right = i;
    }

  }

  long long num = right - left + 1;
  ans += (num * (num + 1) ) / 2;

  cout << ans << endl;
  return 0;
}
