#include <iostream>
#include <string>
using namespace std;

int main(){
  string player[3];
  cin >> player[0] >> player[1] >> player[2];
  int turn = 0;
  int count[3] = {0};

  while(true){
    count[turn]++;
    if(count[turn] == player[turn].size() + 1) {
      cout << (char)('A' + turn) << endl;
      return 0;
    }
    turn = player[turn][count[turn]-1] - 'a';
    // cout << count[0] << " , " << count[1] << " , " << count[2] << endl;
    // cout << player[0].size() << " , " << player[1].size() << " , " << player[2].size() << endl << endl;
  }
  return 0;
}
