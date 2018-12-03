#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  int A[N];
  int B[N];
  int C[N];
  //input
  for(int i = 0; i < N; i++) cin >> A[i];
  for(int i = 0; i < N; i++) cin >> B[i];
  for(int i = 0; i < N; i++) cin >> C[i];

  //sort
  sort(A,A+N);
  sort(B,B+N);
  sort(C,C+N);

  long long ans = 0;
  for(int i = 0; i < N; i++){
    ans += (lower_bound(A, A+N, B[i]) - A) * (N - (upper_bound(C,C+N, B[i]) - C));
  }
  cout << ans << endl;
  return 0;
}
