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
  int ans = 0;
  cin >> N;
  vector<int> odd;
  for(int i = 1; i <= N; i+= 2){
    odd.push_back(i);
  }
  for(int i = 1; i <= N; i+= 2 ){
    int x = 0;
    for(int j = 0; j < odd.size(); j++){
      if(i%odd[j] == 0) x++;
    }
    if(x == 8) ans ++;
  }
  cout << ans << endl;
  return 0;
}
