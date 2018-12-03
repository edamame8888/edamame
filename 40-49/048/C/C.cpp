#include <iostream>
#include <string>

using namespace std;

int main(){
  long N, x;
  long a_prev,a_cur;
  long long ans = 0;
  cin >> N >> x;
  cin >> a_prev;
  if(a_prev >= x){
    ans += a_prev - x;
    a_prev = x;
  }
  for(int i = 1; i < N; i++){
    cin >> a_cur;
    if(a_prev + a_cur > x) {
      ans +=  a_prev + a_cur - x;
      a_cur -=  a_prev + a_cur - x;
    }
    a_prev = a_cur;
  }
  cout << ans << endl;
  return 0;
}
