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
  int Cplace;
  int c = 0;
  cin >> S;
  bool flag = true;
  if(S[0] == 'A'){
    for(int i = 2; i < S.size() - 1; i++){
      if(S[i] == 'C'){
         c++;
         Cplace = i;
      }
    }
    if(c == 1){
      for(int i = 1; i < S.size(); i++){
        if(i != Cplace){
          if( 'a' <= S[i] && S[i] <= 'z'){
            continue;
          }else{
            flag = false;
          }
        }
      }
    }else{
      flag = false;
    }
  }else{
    flag = false;
  }
  if(flag) cout << "AC" << endl;
  else cout << "WA" << endl;
  return 0;
}
