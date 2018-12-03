
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int a,b;

void solve(){
  if(a <= 8 && b <= 8){
    cout << "Yay!" << endl;
  }else{
    cout << ":(" << endl;
  }
  return;
}
int main(){
  cin >> a >> b;
  solve();
  return 0;
}
