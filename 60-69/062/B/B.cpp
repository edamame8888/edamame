#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int H,W;
  cin >> H >> W;
  string board[H];
  for(int i = 0; i < H;i++) cin >> board[i];

  for(int i = 0; i < W+2; i++) cout << '#' ;
  cout << endl;
  for(int i = 0; i < H;i++) cout << "#" << board[i] << "#" << endl;
  for(int i = 0; i < W+2; i++) cout << '#' ;
  cout << endl;

}
