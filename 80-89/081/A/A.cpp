#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  int ans = 0;
  cin >> s;
  for(int i = 0; i < 3; i ++){
    if(s[i] == '1') ans ++;
  }
  cout << ans << endl;
  return 0;
}
