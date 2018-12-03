#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;
/*
方針
X -> Z
Y -> W

a[N-2]
a[N-1]

Xが取れるパターン
X       Y
a[N-2]  a[N-1]
a[N-1]  W
*/
int main(){
  long long N, Z, W;
  cin >> N >> Z >> W;
  long long a[N];
  rep(i,N) cin >> a[i];
  long long maxScore ;
  if(N > 1) maxScore = max( abs(W - a[N-1]) , abs(a[N-1] - a[N-2]) );
  else      maxScore = abs(W - a[N-1]);
  cout << maxScore << endl;
  return 0;
}
