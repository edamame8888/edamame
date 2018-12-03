#include <iostream>

using namespace std;

int main(){
  char op;
  int a,b;
  cin >> a >> op >> b;
  if(op == '+') cout << a+b << endl;
  else cout << a-b << endl;
  return 0;
}
