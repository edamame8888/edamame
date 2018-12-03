#include <iostream>
#include <string>

using namespace std;

int main(){
  string num;

  char op[3];
  cin >> num;
  string sumStr;
  int sum;
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      for(int k = 0; k < 2; k++){
        sum = num[0] - '0';
        sumStr = "";
        sumStr = sumStr + num[0];
        if(i == 0){
          sum += num[1] - '0';
          op[0] = '+';
        }
        else {
          sum -= num[1] - '0';
          op[0] = '-';
        }
        if(j == 0){
          sum += num[2] - '0';
          op[1] = '+';
        }
        else {
          sum -= num[2] - '0';
          op[1] = '-';
        }
        if(k == 0){
          sum += num[3] - '0';
          op[2] = '+';
        }
        else {
          sum -= num[3] - '0';
          op[2] = '-';
        }
        if(sum == 7){
          for(int x = 0; x < 3; x++) cout << num[x] << op[x];
          cout << num[3] <<"=7" << endl;
          return 0;
        }
      }
    }
  }
  return 0;
}
