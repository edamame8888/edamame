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

long long gcd( long long m, long long n ){

  if ( n == 0) return m;
  return gcd(n,m%n);
}//gcd




int main(){
  int n,x;
  cin >> n >> x;
  vector<int> p(n);
  for(int i = 0; i < n; i++){
    cin >> p[i];
  }
  p.push_back(x);
  vector<long> dif;
  sort(p.begin(),p.end());
  for(int i = 0; i < p.size() - 1; i++){
    dif.push_back(p[i+1] - p[i]);
  }
  dif.erase(unique(dif.begin(),dif.end()),dif.end());
  long long ans = dif[0];
  for(int i = 1; i < dif.size(); i++){
    ans = gcd(ans,dif[i]);
  }
  cout << ans << endl;
  return 0;
}
