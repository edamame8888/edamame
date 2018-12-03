#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int sum,ans = 1e9;
  for(int i = -100; i <= 100; i++){
    sum = 0;
    for(int j = 0; j < n; j++){
      sum += (a[j]-i) * (a[j]-i);
    }
    ans = min(ans,sum);
  }
  cout << ans << endl;
}
