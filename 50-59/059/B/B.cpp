#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  string A,B;
  cin >> A >> B;
  if(A==B) cout << "EQUAL" << endl;
  else if(A.size() < B.size() || (A.size() == B.size() && A < B)) cout << "LESS" << endl;
  else cout << "GREATER" << endl ;
  return 0;
}
