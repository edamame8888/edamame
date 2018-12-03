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
  vector<int> a{1,2,3,4,5,6};
  int N;
  cin >> N;
  N %= 30;
  for(int i = 0; i < N; i++){
    swap(a[i%5],a[i%5+1]);
  }
  for(int x: a){
    cout << x ;
  }
  cout << endl;

  return 0;
}
