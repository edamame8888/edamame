#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  for(int i = 1; i <= b; i++){
    int mod = (a*i) % b;
    if(mod == c){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
