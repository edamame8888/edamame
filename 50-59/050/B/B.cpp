#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int N,M,sum = 0,p,x;
  cin >> N;
  int T[N];
  for(int i = 0; i < N; i++){
    cin >> T[i];
    sum += T[i];
  }
  cin >> M;

  for(int i = 0; i < M; i++){
      cin >> p >> x;
      cout << sum - (T[p-1] - x) << endl;
  }
}
