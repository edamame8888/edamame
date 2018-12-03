#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  int n;
  cin >> n;

  long long s[n] ,scoreSum = 0;
  rep(i,n){
    cin >> s[i];
    scoreSum += s[i];
  }

  sort(s,s+n);

  if(scoreSum % 10){
    cout << scoreSum << endl;
    return 0;
  }
  rep(i,n){
    if(s[i] % 10){
      cout << scoreSum - s[i] << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}
