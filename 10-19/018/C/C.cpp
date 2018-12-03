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
  int R,C,K;

  //input
  cin >> R >> C >> K;
  string board[R];
  for(int i = 0; i < R; i++) cin >> board[i];

  pair<int ,int> space[R][C];

  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      if(board[i][j] == 'x') {
        space[i][j].first = 0;
        space[i][j].second = 0;
        continue;
      }
      if(i-1 < 0){
        space[i][j].first = 1;
      }else{
        space[i][j].first = space[i-1][j].first + 1;
      }
    }
  }

  for(int i = R-1; i >= 0; i--){
    for(int j = 0; j < C ; j++){
      if(board[i][j] == 'x') continue;
      if(i + 1 >= R){
        space[i][j].second = 1;
      }else{
        space[i][j].second = space[i+1][j].second + 1;
      }
    }
  }

  int ans = 0;
  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      if(space[i][j].first >= K && space[i][j].second >= K){
        bool flag = true;
        for(int k = 1; k < K && flag ; k++ ){
          if(j-k < 0 || space[i][j-k].first < K-k || space[i][j-k].second < K-k) flag = false;
          if(j+k >= C || space[i][j+k].first < K-k || space[i][j+k].second < K-k) flag = false;
        }
        if(flag){/*cout << i+1 << " , " << j+1 << endl;*/ans++;}
      }
    }
  }

  cout << ans << endl;
  return 0;
}
