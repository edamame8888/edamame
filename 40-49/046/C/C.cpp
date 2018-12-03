#include <iostream>

using namespace std;

int main(){
  long long N,T,A,n,x,y;
  cin >> N;
  long long T_sum = 1, A_sum = 1;
  for(int i = 0; i < N; i++){
    cin >> T >> A;
    x = T_sum / T;
    y = A_sum / A;
    if(T_sum % T != 0) x++;
    if(A_sum % A != 0) y++;
    n = max( x, y );
    T_sum = n * T;
    A_sum = n * A;
  }
  cout << T_sum + A_sum << endl;
  return 0;
}
