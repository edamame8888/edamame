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
  string X;
  cin >>  X;
  int cnt = X.size() - 1;
  while(cnt >= 0){
    if( X[cnt] == 'o' || X[cnt] == 'k' || X[cnt] == 'u'){
      cnt --;
    }else if(X[cnt] == 'h' && cnt - 1 >= 0 && X[cnt-1] == 'c'){
      cnt -= 2;
    }else{
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
