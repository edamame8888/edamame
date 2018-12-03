#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  string board[h];
  int ansBoard[h][w];
  int dx[8] = {1,0,-1,0,1,1,-1,-1};
  int dy[8] = {0,1,0,-1,1,-1,1,-1};

  for(int i = 0; i < h; i++){
    cin >> board[i];
  }

  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      ansBoard[i][j] = 0;
    }
  }

  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(board[i][j] == '#'){
        for(int k = 0; k < 8; k++){
          if(i + dy[k] >= 0 && i + dy[k] < h && j + dx[k] >= 0 && j + dx[k] < w){
            ansBoard[i + dy[k]][j + dx[k]]++;
          }
        }
      }
    }
  }

  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(board[i][j] == '#') cout << "#" ;
      else cout << ansBoard[i][j] ;
    }
    cout << endl;
  }
  return 0;
}
