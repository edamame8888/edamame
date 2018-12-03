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

/*
return tyokudai score - tyokuko score

turn is odd -> tyokudai's turn -> return max()
turn is even -> tyokuko's turn  -> return min()
*/
int b[2][3];
int c[3][2];
long long score;

long long maxScoreSerch(int turn, vector<vector<char>> board){
  long long diff;
  long long maxDiff = -(1e18) ;
  long long minDiff =  (1e18);

  if(turn == 9){
    long long currentChokudaiScore = 0;
    long long currentChokukoScore = 0;
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        if(board[i][j] == '.') board[i][j] = 'o';
      }
    }
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){

        //add Score b[i][j]
        if(i+1 < 3){
          if(board[i+1][j] == board[i][j]) currentChokudaiScore += b[i][j];
          else                             currentChokukoScore += b[i][j];
        }
        //add Score c[i][j]
        if(j+1 < 3){
          if(board[i][j+1] == board[i][j]) currentChokudaiScore += c[i][j];
          else                             currentChokukoScore += c[i][j];
        }
      }
    }
    return currentChokudaiScore - currentChokukoScore;
  }else{

    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        if(board[i][j] == '.') {
          //write o or x
          if(turn % 2) board[i][j] = 'o';
          else         board[i][j] = 'x';

          //get diff
          diff = maxScoreSerch(turn + 1, board);

          if(turn % 2)  maxDiff = max(maxDiff,diff);
          else          minDiff = min(minDiff,diff);
          //erase board
          board[i][j] = '.';
        }
      }
    }

    if(turn == 1){
      cout << (score + maxDiff) / 2 << endl;
      cout << (score - maxDiff) / 2 << endl;
      return 0;
    }

    if(turn % 2)  return maxDiff;
    else          return minDiff;
  }
}

int main(){
  //input
  score = 0;
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      cin >> b[i][j];
      score += b[i][j];
    }
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
      cin >> c[i][j];
      score += c[i][j];
    }
  }

  //make board
  vector<vector<char>> board(3,vector<char>(3,'.'));

  maxScoreSerch(1, board);
  return 0;
}
