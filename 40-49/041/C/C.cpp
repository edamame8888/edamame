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
  int N;
  cin >> N;
  vector<pair<int,int>> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i].first ;
    a[i].second = i + 1;
  }

  sort(a.begin(),a.end(),greater<pair<int,int>>());
  
  for(int i = 0; i < N; i++){
    cout << a[i].second << endl;
  }


  return 0;
}
