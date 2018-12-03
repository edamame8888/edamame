#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int A,B;
  string s;
  cin >> A >> B >> s;
  for(int i = 0; i < A; i++){
    if( '0' <= s[i] && '9' >= s[i]) continue;
    else{
      cout << "No" << endl;
      return 0;
    }
  }
  if( '-' != s[A]) {
    cout << "No" << endl;
    return 0;
  }
  for(int i = A + 1; i < B + A + 1; i++){
    if( '0' <= s[i] && '9' >= s[i]) continue;
    else{
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
