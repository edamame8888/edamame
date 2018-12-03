#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int firstA,lastZ;
  string str;
  cin >> str;

  for(int i = 0; i < str.size(); i++){
    if(str[i] == 'A'){
      firstA = i;
      break;
    }
  }

  for(int j = str.size() - 1; j >= 0; j--){
    if(str[j] == 'Z'){
      lastZ = j;
      break;
    }
  }

  cout << lastZ - firstA + 1 << endl;
}
