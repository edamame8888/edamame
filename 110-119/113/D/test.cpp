#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  int W;
  cin >> W;
  //i -> [ 0 , 2^W )
  for(int i = 0; i < (1<<W); i++){
    vector<bool> bitArray(W,0);
    int tmp = i ,cnt = W-1;
    while(tmp>0){
      if(tmp % 2) bitArray[cnt] = 1;
      tmp /= 2;
      cnt--;
    }
  }
  return 0;
}
