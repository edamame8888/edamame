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
  string str;
  int cmd;
  cin >> str >> cmd ;
  int X = 0, Y = 0, question = 0;
  for(int i = 0; i < str.size() ; i++){
    switch (str[i]) {
      case 'R':
        X++;
        break;
      case 'L':
        X--;
        break;
      case 'U':
        Y++;
        break;
      case 'D':
        Y--;
        break;
      case '?':
        question++;
        break;
    }
  }
  if(cmd%2){
    //output max
    cout << abs(X) + abs(Y) + question << endl;
  }else{
    //output int main(int argc, char const *argv[]) {
    int ans =  abs(X) + abs(Y) - question;
    if(ans < 0){
      if(ans%2 == 0) ans = 0;
      else ans = 1;
    }
    cout << ans << endl;
  }
  return 0;
}
