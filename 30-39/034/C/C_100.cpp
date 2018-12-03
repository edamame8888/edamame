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
#define MOD (long)(1e9 + 7)
int main(){
  int H,W;
  cin >> H >> W;
  vector<vector<long> > board(H,vector<long>(W,0));
  board[0][0] = 1;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(i+1 < H) board[i+1][j] = (board[i+1][j] + board[i][j]) % MOD ;
      if(j+1 < W) board[i][j+1] = (board[i][j+1] + board[i][j]) % MOD  ;
    }
  }
  cout << board[H-1][W-1] << endl;
  return 0;
}
