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
  int K;
  int even = 0;
  int odd = 0;
  cin >> K;
  for(int i = 1; i <= K; i++){
    if(i%2==1)odd++;
    else even++;
  }

  cout << odd * even << endl;

  return 0;
}
