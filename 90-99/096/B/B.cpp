#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int k;
  int board[3];
  cin >> board[0] >> board[1] >> board[2] >> k;
  sort(board,board + 3);
  cout << board[0] + board[1] + board[2] * (1<<k) << endl;
}
