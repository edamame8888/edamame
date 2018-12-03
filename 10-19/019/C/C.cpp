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
  int n,ans = 0,input;
  cin >> n;
  set<int> num;
  for(int i = 0; i < n; i++){
    cin >> input;
    if(input % 2 == 1){
      num.insert(input);
      continue;
    }
    while(input % 2 == 0){
      input/= 2;
    }
    num.insert(input);
  }

  cout << num.size() << endl;
  return 0;
}
