#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  int sx ,sy ,tx ,ty , dx, dy;
  cin >> sx >> sy >> tx >> ty;
  dx = tx - sx;
  dy = ty - sy;
  //s -> t
  cout << string(dy,'U') << string(dx,'R');
  //t -> s
  cout << string(dy,'D') << string(dx,'L');
  //s -> t
  cout << 'L' << string(dy+1,'U') << string(dx+1,'R') << 'D';
  //t -> s
  cout << 'R' << string(dy+1,'D') << string(dx+1,'L') << 'U';

  cout << endl;
  return 0;
}
