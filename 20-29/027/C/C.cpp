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
  long long N;
  cin >> N;
  int depth = 0;
  for(long long n = N; n > 0; n/=2) depth++;
  //depth is odd -> Aoki, depth is even -> Takahashi
  //自分の階層にdepthがあるとき、左にすすみたい
  //自分の階層にdepthがないとき、右にすすみたい
  int turn = 1; //takahashi's turn
  long long x = 1;
  while(true){
    if(turn % 2 != depth % 2){
      //自分の階層にdepthがある
      x *= 2;
    }else{
      //自分の階層にdepthがない
      x = x * 2 + 1;
    }
    if(x > N){
      if(turn % 2 == 1) cout << "Aoki" << endl;
      else cout << "Takahashi" << endl;
      return 0;
    }
    turn++;
  }
  return 0;
}
