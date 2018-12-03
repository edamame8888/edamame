#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;
long long board[2100][2100];
int count(int x1, int y1, int x2, int y2){
  return board[y1][x1] - board[y1][x2] - board[y2][x1] + board[y2][x2];
}
int main(){
  int N,K;
  cin >> N >> K;
  int x[N], y[N];
  rep(i,N){
    char c;
    cin >> x[i] >> y[i] >> c;
    // change B -> W
    if(c == 'W') x[i] += K;
    // copress
    x[i] = ( x[i] % (2 * K) ) + 1;
    y[i] = ( y[i] % (2 * K) ) + 1;
  }

  rep(i,N){
    board[y[i]][x[i]]++;
  }

  rep(i,2*K+1)FOR(j,1,2*K+1) {board[i][j] += board[i][j-1];}
  FOR(i,1,2*K+1)rep(j,2*K+1) {board[i][j] += board[i-1][j];}

  int tmp ,ans = 0;
  FOR(i,1,K+1){
    FOR(j,1,K+1){
    
      tmp = count(i,      j,    i+K,  j+K ) +
            count(0,      0,    i,    j   ) +
            count(i+K,    j+K,  2*K,  2*K ) +
            count(K+i,    0,    2*K,  j   ) +
            count(0,      K+j,  i,    2*K );
      //if(tmp == 3) cout << i << ' ' << j << endl;
      ans = max(ans,max(tmp,N-tmp));
    }
  }
  cout << ans << endl;
  return 0;
}
