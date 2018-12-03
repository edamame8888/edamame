#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int p[3];
  cin  >> p[0] >> p[1] >> p[2];
  if(p[0] == p[1] && p[1] == p[2]) cout << 1 << endl;
  else if(p[0] == p[1] || p[0] == p[2] || p[1] == p[2]) cout << 2 << endl;
  else cout << 3 << endl;

  return 0;
}
