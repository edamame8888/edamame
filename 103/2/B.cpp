#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

bool res;
string str,ans;
void solve(){
  res = false ;
  char tmp;
  for(int i = 0; i < str.size()+1; i++){
    if(ans == str){
      res = true;
      break;
    }
    tmp = (char)str[str.size()-1];
    for(int j = str.size()-1; j >= 1; j--){
      str[j] = str[j-1];
    }
    str[0] = tmp;

    //cout << str << endl;
  }
  if(res) cout << "Yes" << endl;
  else cout << "No" << endl;
  return ;
}
int main(){
  cin >> ans >> str;
  solve();
  return 0;
}
