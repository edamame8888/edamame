#include <iostream>

using namespace std;
int n,k;
int A[100001];
void solve(){
  int one;
  int right,left;
  int res = 0;
  //serch 1
  for(int i = 0; i < n; i++){
    if(A[i] == 1) one = i;
  }
  right = one;
  left = one;
  int resMin = 1000001;
  for(int i = 0; i < k; i++){//初動を決める
    res  = 1;
    left = max(0,one - i);
    right = min(n-1,one + k-1 - i);
    while(right != n-1 || left != 0){
      if(left != 0) {left = max(0,left - (k -1)); res++;}
      if(right != n-1) {right = min(n-1,right + (k -1)); res++;}
    }
    resMin = min(resMin,res);
  }
  cout <<  resMin << endl;
  return ;
}
int main(){
  cin >> n >> k;
  for(int i = 0; i <  n ; i++){
    cin >> A[i] ;
  }
  solve();
  return 0;
}
