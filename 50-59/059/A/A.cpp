#include <iostream>
#include <string>

using namespace std;

int main(){
  string a,b,c;
  cin >> a >> b >> c;
  cout << (char)(a[0] + ('A' - 'a')) << (char)(b[0] + ('A' - 'a')) << (char)(c[0] + ('A' - 'a')) << endl;

  return 0;
}
