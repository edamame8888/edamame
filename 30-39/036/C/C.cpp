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
  vector<int> a(N);
  vector<int> b(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b.begin(),b.end());
  b.erase(unique(b.begin(),b.end()),b.end());

  map<int,int> conversion;

  for(int i = 0; i < b.size(); i++){
    conversion[b[i]] = i;
  }

  for(int i = 0; i < N; i++){
    cout << conversion[a[i]] << endl;
  }
  return 0;
}
