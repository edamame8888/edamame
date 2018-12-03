#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  double n,K;
  cin >> n >> K;

  printf("%0.10f\n",( 6*(K-1)*(n-K) + 3*(n-1) + 1) / (double)(n * n * n));
  return 0;
}
