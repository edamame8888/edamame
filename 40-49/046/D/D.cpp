#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;
  int paperTime = 0, RockTime = 0;
  int win = 0, lost = 0;
  for(int i = 0; i < s.size(); i++){
    switch (s[i]) {
      case 'g':
        if(RockTime >= paperTime + 1){
          paperTime++;
          win ++;
        }else{
          RockTime++;
        }
        break;
      case 'p':
        if(RockTime >= paperTime + 1){
          paperTime++;
        }else{
          lost ++;
          RockTime++;
        }
        break;
    }
  }
  cout << win - lost << endl;
  return 0;
}
