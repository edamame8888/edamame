#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

const int dx[] = {0,0,1,1,1,-1,-1,-1};
const int dy[] = {1,-1,0,1,-1,0,1,-1};
int main(){
  int H,W;
  cin >> H >> W;
  string board[H];
  vector<vector<int> > checkBoard(H,vector<int>(W,0));

  rep(i,H) cin >> board[i];

  rep(i,H)rep(j,W){
    if(board[i][j] == '#') checkBoard[i][j] = 1;
  }

  rep(i,H)rep(j,W){
    if(board[i][j] == '#'){
      bool flag = true;
      rep(dir,8){
        int nextX = j + dx[dir];
        int nextY = i + dy[dir];
        if(nextX >= 0 && nextX < W && nextY >= 0 && nextY < H ){
          if(board[nextY][nextX] != '#') flag = false;
        }
      }
      if(flag){
        rep(dir,8){
          int nextX = j + dx[dir];
          int nextY = i + dy[dir];
          if(nextX >= 0 && nextX < W && nextY >= 0 && nextY < H && checkBoard[nextY][nextX] == 1){
            checkBoard[nextY][nextX] = 2;
          }
        }
        checkBoard[i][j] = 3;
      }
    }
  }

  rep(i,H)rep(j,W){
    if(checkBoard[i][j] == 1){
      cout << "impossible" << endl;
      return 0;
    }
  }

  cout << "possible" << endl;
  rep(i,H){
    rep(j,W){
      if(checkBoard[i][j] == 3){
        cout << "#";
      }else cout << ".";
    }
    cout << endl;
  }

  return 0;
}
