#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){
  int N;
  cin >> N;
  int a[2][N];
  rep(i,N) cin >> a[0][i];
  rep(i,N) cin >> a[1][i];

  rep(i,N-1) a[0][i+1] += a[0][i];
  rep(i,N-1) a[1][i+1] += a[1][i];

  int ans = 0;
  rep(i,N){
    int bScore;
    if(i-1 >= 0) bScore = a[1][N-1] - a[1][i-1];
    else         bScore = a[1][N-1];
    ans = max(ans, a[0][i] + bScore);
  }
  cout << ans << endl;
  return 0;
}
