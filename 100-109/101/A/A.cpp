
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int a,b;
string str;
void solve(){
  int res = 0;
  for(int  i = 0; i< str.size(); i++){
    if(str[i] == '+'){
      res ++;
    }else{
      res --;
    }
  }
  cout << res << endl;
  return;
}
int main(){
  cin >> str;
  solve();
  return 0;
}
