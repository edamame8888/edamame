#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> ANS;

  if( N % 2 == 1){
    ANS.push_back(0);
    for(int i = 2; i <= N-1; i += 2){
      ANS.push_back(i);
      ANS.push_back(i);
    }
  }else{
    for(int i = 1; i <= N; i+=2){
      ANS.push_back(i);
      ANS.push_back(i);
    }
  }

  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  sort(ANS.begin(),ANS.end());
  sort(A.begin(),A.end());

  // for(int x: A) cout << x << ",";
  // cout << endl;
  // for(int x: ANS) cout << x << ",";
  // cout << endl;

  if(A == ANS){
    if(N%2) N--;
    long long ans = 1;
    for(int i = 0; i < (N)/2; i++){
       ans *= 2;
       ans = ans % (long long)(7+(1e9));
     }
    cout << ans << endl;
  }else{
    cout << "0" << endl;
  }

  return 0;
}
