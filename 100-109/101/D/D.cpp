#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

long K;

void solve(){
  int keta = 0;
  int cnt = 0;
  for(int i = 1; i < 10; i++){
    long long ans = 0;
    for(int j = 0; j <= keta; j++){
      if(j == keta){
        ans += i * pow(10,j);
      }
      else ans += pow(10,j) * 9;
    }
    cnt++;
    if(cnt <= K) cout << ans << endl;
    else break;
    if(i == 9) {
      keta ++;
      i = 0;
    }
  }
  return ;
}

int main(){
  cin >> K;
  solve();
  return 0;
}
