#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int makeSum(int x){
  int res = 0;
  while(x != 0){
    res += x % 10;
    x /= 10;
  }
  return res;
}
int main(){
  int N,A,B,ans=0;
  cin >> N >> A >> B;
  for(int i = 1; i <= N; i++){
    int sum = makeSum(i);
    if(A <= sum && sum <= B)ans += i;
  }
  cout << ans << endl;
}
