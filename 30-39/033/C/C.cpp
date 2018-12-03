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
  string S;
  cin >> S;
  int num;
  int ans = 0;
  bool flag = false;

  for(int i = 0; i < S.size(); i++){
    if(i % 2 == 0){//num
      num = (int)(S[i] - '0');
    }else{//op
      if(S[i] == '+'){
        if(num == 0) flag = true;
        if(!flag) ans ++;
        flag = false ;
      }else{
        if(num == 0) flag = true;
      }
    }
  }
  if(num == 0) flag = true;
  if(!flag)  ans ++;

  cout << ans << endl;
  return 0;
}
