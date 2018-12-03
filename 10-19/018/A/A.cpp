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
  int player[3];
  int cnt;

  cin >> player[0] >> player[1] >> player[2];
  for(int i = 0; i < 3; i++){
    cnt = 1;
    for(int j = 0; j < 3; j++){
      if(i == j) continue;
      else if(player[i] < player[j] ) cnt ++;
    }
    cout << cnt << endl;
  }

  return 0;
}
