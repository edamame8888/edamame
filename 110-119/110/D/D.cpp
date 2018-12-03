#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
#define MOD (int)(1e9 + 7)

long long modPow(int x, int n){
  if(n == 0) return 1;
  if(n % 2 == 0) {long long res = modPow(x,n/2); return res * res % MOD;}
  return modPow(x,n-1) * x % MOD;
}

long long kaizyou(int x){
  long long res = 1;
  for(int i = x; i > 0; i--){
    res = res * i % MOD;
  }
  return res;
}

long long modComb(int x, int y){
  if( x/2 < y ) return modComb(x,x-y);
  return (kaizyou(x) * modPow(kaizyou(x-y),MOD-2) % MOD) * modPow(kaizyou(y),MOD-2) % MOD;
}

int main(){
  int N,M;
  cin >> N >> M;
  //vector<pair<int,int>> pfact; //prime factors
  vector<int> pfact;
  for(int i = 2; i * i <= M; i++){
    if(M % i == 0){
      int cnt = 0;
      while(M % i == 0){
        cnt ++;
        M /= i;
      }
      pfact.push_back(cnt);
    }
  }
  // M == prime num
  if(M != 1) pfact.push_back(1);

  // ans = ∏ H(N,pfact[i])
  long long ans = 1;
  for(int i = 0; i < pfact.size(); i++){
    ans = ans * modComb(N + pfact[i] - 1, N - 1) % MOD;
  }

  cout << ans << endl;
  return 0;

}
