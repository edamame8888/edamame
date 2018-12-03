#include <iostream>

using namespace std;

int main(){
  int N , A;
  cin >> N >> A;
  N = N % 500;
  if(A >= N) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
