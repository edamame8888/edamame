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
  vector<int> ans;
  int i = 3;
  while(n != 0){
    if(n - (1 << i) >= 0){
      ans.push_back(1 << i);
      n -= 1 << i;
    }else{
      i--;
    }
  }
  int ansSize = ans.size();
  cout << ansSize <<endl;
  for(int i = 0; i < ansSize; i++){
    cout << ans[i] << endl;
  }
  return 0;
}
