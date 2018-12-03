#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  int n;
  cin >> n;
  int oddCnt = 0, mult2 = 0, mult4 = 0;
  rep(i,n){
    int input;
    cin >> input;
    if(input % 4 == 0){
      mult4 ++;
    }else if(input % 2 == 0){
      mult2 ++;
    }else{
      oddCnt ++;
    }
  }

  long long prev;
  rep(i,n){
    if(i == 0 && oddCnt > 0){
      prev = 1;
      oddCnt--;
    }else if(prev % 4 == 0){
      if(oddCnt > 0){
        prev = 1;
        oddCnt--;
      }else if(mult2 > 0){
        prev = 2;
        mult2 --;
      }else if(mult4 > 0){
        prev = 4;
        mult4 --;
      }
    }else if(prev % 2 == 0){
      if(mult4 > 0){
        prev = 4;
        mult4--;
      }else if(mult2 > 0){
        prev = 2;
        mult2 --;
      }else{
        cout << "No" << endl;
        return 0;
      }
    }else if(prev % 2 == 1){
      if(mult4 > 0){
        prev = 4;
        mult4--;
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
