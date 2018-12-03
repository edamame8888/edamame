#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int a,b,W;ac
  cin >> W >> a >> b;
  if( abs(a-b) <= W){
    cout << 0 << endl;
    return 0;
  }
  cout << abs(a-b) - W << endl;
  return 0;
}
