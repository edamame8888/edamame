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
#define INT_MAX 2147483647
int R,C,sy,sx,gy,gx;
char board[50][50];
int cnt[50][50];

struct XY{
  int x;
  int y;
};
int bfs(){

  deque<XY> queue;
  int dx[] = {1,0,-1,0};
  int dy[] = {0,1,0,-1};
  XY xy;
  xy.x = sx - 1;
  xy.y = sy - 1;
  cnt[sy-1][sx-1] = 0;
  queue.push_back(xy);
  while(!queue.empty()){
    xy = queue.front();
    queue.pop_front();
    for(int i = 0; i < 4; i++){
      int nx = xy.x + dx[i];
      int ny = xy.y + dy[i];
      if(nx != 0 && ny != 0 && ny < R && nx < C && board[ny][nx] != '#' && cnt[ny][nx] == INT_MAX){
        XY next;
        next.x = nx;
        next.y = ny;
        cnt[ny][nx] = min(cnt[ny][nx],cnt[xy.y][xy.x] + 1);
        queue.push_back(next);
      }
    }
  }
  return cnt[gy-1][gx-1];
}
int main(){
  cin >> R >> C;
  cin >> sy >>  sx >> gy >> gx;
  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      cin >> board[i][j];
      cnt[i][j] = INT_MAX;
    }
  }
  int ans = bfs();
  cout << ans << endl;
  return 0;
}
