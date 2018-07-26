
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n;


int main(){
  cin >> n;
  int x;
  int minNum ;
  int maxNum ;
  for(int i = 0; i < n; i++){
    cin >> x;
    if(i == 0){
     minNum = x;
     maxNum = x;
   }else{
      minNum = min(minNum,x);
      maxNum = max(maxNum,x);
    }
  }
  int ans = abs(maxNum - minNum);
  cout <<  ans << endl;



  return 0;
}
