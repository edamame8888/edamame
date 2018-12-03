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
  int n,t;
  cin >> n >> t;
  vector<pair<int,int> > ct(n);
  for(int i = 0; i < n; i++){
    cin >> ct[i].first >> ct[i].second ;
  }
  sort(ct.begin(),ct.end());
  for(int i = 0; i < n; i++){
    if(ct[i].second <= t){
      cout << ct[i].first << endl;
      return 0;
    }
  }
  cout << "TLE" << endl;
  return 0;
}
