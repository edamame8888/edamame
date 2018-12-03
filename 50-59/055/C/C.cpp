#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

typedef long long ll;
int main(){
  ll n,m;
  cin >> n >> m;
  ll maxPair = 0;
  maxPair = min(n,m/2);
  n -= maxPair;
  m -= maxPair * 2;
  //cout << maxPair << endl;
  if(n == 0 && m > 0){
    maxPair += m / 4;
  }
  cout << maxPair << endl;
  return 0;
}
