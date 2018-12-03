#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int N,A,B,res;
  cin >> N >> A >> B ;
  res = min(B,N*A);
  cout << res << endl;
  return 0;
}
