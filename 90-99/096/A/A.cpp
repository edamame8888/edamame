#include <iostream>

using namespace std;

int main(){
  int a , b, cnt = 0;
  cin >> a  >> b;
  for(int month = 1; month <= a; month++){
    for(int day = 1; day <= 31; day++){
      if(month == day) cnt++;
      if(day == b && a == month) break;
    }
  }
  cout << cnt << endl;
  return 0;
}
