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
  int l,r,t,N,Q;
  cin >> N >> Q;
  vector<int> array(N,0);
  for(int i = 0; i < Q; i++){
    cin >> l >> r >> t;
    l--;
    r--;
    for(int j = l; j <= r; j++){
      array[j] = t;
    }
  }

  for(int i = 0; i < N; i++){
    cout << array[i] << endl;
  }
  return 0;
}
