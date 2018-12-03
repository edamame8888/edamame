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
  int n, sum = 0,ans = 0;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
    sum += a[i];
  }
  if(sum % n != 0){
    cout << -1 << endl;
    return 0;
  }

  int over = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == (- over + sum/n)){
      over = 0;
      continue;
    }else{
      over += a[i] - sum/n;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
