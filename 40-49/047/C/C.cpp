#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  int area = 1;
  cin >> s;
  for(int i = 1; i <  s.size(); i++){
    if(s[i-1] != s[i]) area++;
  }
  cout << area - 1 << endl;
  return 0;
}
