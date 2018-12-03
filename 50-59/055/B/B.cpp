#include <iostream>
#define MOD (int)(1e9+7)
using namespace std;

int main(){
  long power = 1;
  int N;
  cin >> N;
  for(int i = 0; i < N; i++) power = power * (i+1) % MOD;
  cout << power << endl;
  return 0;
}
