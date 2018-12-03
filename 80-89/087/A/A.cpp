#include <iostream>

using namespace std;

int main(){
  int X,A,B;
  cin >> X >> A >> B;
  X -= A;
  cout << (X % B) << endl;
  return 0;
}
