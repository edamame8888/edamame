#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  string oddStr,evenStr;
  cin >> oddStr >> evenStr;
  for(int i = 0; i < oddStr.size(); i++){
    cout << oddStr[i];
    if(i < evenStr.size()){
      cout << evenStr[i];
    }
  }
  cout << endl;
  return 0;
}
