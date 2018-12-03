#include <iostream>
#include <map>

using namespace std;

int main(){
  int A,N;
  map<int,int> cnt;
  cin  >> N;
  for(int i = 0; i < N; i++){
    cin >> A;
    cnt[A]++;
  }
  int ans = 0;
  for(auto & x : cnt){
    //% 2 の代わりにビットマスクで & 1にする
    if(x.second & 1) ans ++;
  }
  cout << ans  << endl;
}
