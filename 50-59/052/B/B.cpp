#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int n,ans = 0,x = 0;
  string str;
  cin >> n >> str ;
  for(int i = 0; i < n; i++){
    if(str[i] == 'I'){
      x++;
      ans = max(x,ans);
    }else{
      x--;
      ans = max(x,ans);
    }
  }
  cout << ans << endl;
  return 0;
}
