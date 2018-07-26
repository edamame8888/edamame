#include <iostream>

using namespace std;
int N;
long a[10001];
void solve(){
  long ans = 0;
  for(int i = 0; i < N; i++){
    while(a[i] % 2 == 0){
      a[i] /= 2 ;
      ans++;
    }
  }
  cout << ans << endl;
  return ;
}
int main(){
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  solve();
  return 0;
}
