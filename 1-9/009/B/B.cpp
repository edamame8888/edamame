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
  int n,input;
  cin >> n;
  vector<int> A;
  for(int i = 0; i < n ; i++) {
    cin >> input;
    A.push_back(input);
  }
  sort(A.begin(),A.end(),greater<int>());
  A.erase(unique(A.begin(),A.end()),A.end());
  cout << A[1] << endl;

  return 0;
}
