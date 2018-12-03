#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int c[3];
  cin >> c[0] >> c[1] >> c[2];
  sort(c, c + 3);
  if(c[0] + c[1] == c[2]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
