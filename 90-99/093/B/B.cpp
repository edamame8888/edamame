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
  int a,b,k;
  cin >> a >> b >> k;
  vector<int> A;
  for(int i = a; i < a + k ; i++) {
    if(i <= b )A.push_back(i);
  }
  for(int i = b-k+1; i <= b ; i++) {
    if(i >= a )A.push_back(i);
  }

  //descendingSort
  sort(A.begin(),A.end());
  //unique
  A.erase(unique(A.begin(),A.end()),A.end());
  for(int i = 0; i < A.size(); i++) cout << A[i] << endl;
  return 0;
}
