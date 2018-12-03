#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  string s;
  string headStr,tailStr;
  cin >> s;
  while(true){
    s = s.substr(0,s.size()-1);
    if(s.size() % 2 == 0){
      headStr = s.substr(0,s.size()/2);
      tailStr = s.substr(s.size()/2 );
      //cout << headStr << endl << tailStr << endl;
      if(headStr == tailStr){
        cout << s.size() << endl;
        return 0;
      }
    }

  }
}
