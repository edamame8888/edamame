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
  int NG[3],N;
  cin >> N;
  cin >> NG[0] >> NG[1] >> NG[2];


  for(int i = 0; i < 3; i++){
    if(N == NG[i]){
      cout << "NO" << endl;
      return 0;
    }
  }
  int minusNum;
  for(int x = 0; x < 100; x++){
    //cout << N << endl;
    minusNum = 3;
    for(int i = 0; i < 3; i++ ){
      if(N - 3 == NG[i]) {
        minusNum --;
        break;
      }
    }
    if(minusNum == 2){
      for(int i = 0; i < 3; i++ ){
        if(N - 2 == NG[i]) {
          minusNum --;
          break;
        }
      }
    }
    if(minusNum == 1){
      for(int i = 0; i < 3; i++ ){
        if(N - 1 == NG[i]) {
          minusNum --;
          break;
        }
      }
    }
    if(minusNum == 0){
      cout << "NO" << endl;
      return 0;
    }
    N -= minusNum;
  }

  if(N <= 0) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
