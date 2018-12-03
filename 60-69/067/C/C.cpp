#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
typedef long long ll;

int main(){
  int n;
  cin >> n;

  ll a[n],sumArray[n],minScore = 1e15;
  rep(i,n){
    cin >> a[i];
    sumArray[i] = a[i];
  }
  rep(i,n-1) sumArray[i+1] += sumArray[i];

  FOR(i,0,n-1){
    minScore = min(minScore,abs(sumArray[i]-(sumArray[n-1]-sumArray[i])));
  }
  cout << minScore << endl;
  return 0;
}
