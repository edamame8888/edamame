#include <iostream>
#include <string>
using namespace std;

int main(){
  int sum = 700;
  string memo;
  cin >> memo ;
  for(int i = 0; i < memo.size(); i++) if(memo[i] == 'o') sum += 100;
  cout << sum << endl;
  return 0;
}
