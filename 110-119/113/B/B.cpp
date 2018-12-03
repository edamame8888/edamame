#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  double n,t,a;
  cin >> n;
  cin >> t >> a;
  double h[(int)n];
  rep(i,n) cin >> h[i];

  int bestH;
  double diff = 100000;
  rep(i,n){
    if(diff > abs(a - (t - h[i] * 0.006))){
      diff = abs(a - (t - h[i] * 0.006));
      bestH = i+1;
    }
  }
  cout << bestH << endl;
  return 0;
}
