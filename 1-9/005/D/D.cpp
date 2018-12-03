#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

long long board[100][100];
int maxScore[10000];
int count(int x1, int y1, int x2, int y2){
  return board[y1][x1] - board[y1][x2] - board[y2][x1] + board[y2][x2];
}

int main(){
  int N;
  cin >> N;
  rep(i,N)rep(j,N) cin >> board[i+1][j+1] ;

  //make imos table
  rep(i,N+1)FOR(j,1,N+1) {board[i][j] += board[i][j-1];}
  FOR(i,1,N+1)rep(j,N+1) {board[i][j] += board[i-1][j];}


  rep(i,N+1)rep(j,N+1){ //左角
    FOR(k,i+1,N+1)FOR(l,j+1,N+1){//右角 (k, l)
        maxScore[(k-i)*(l-j)] = max(maxScore[(k-i)*(l-j)], count(j,i,l,k));
    }
  }
  rep(i,50*50) maxScore[i+1] = max(maxScore[i+1],maxScore[i]);

  int Q;
  cin >> Q;

  rep(i,Q){
    int q;
    cin >> q;
    cout << maxScore[q] << endl;
  }

  //rep(i,N*N+1) cout << i << " : " << maxScore[i] << endl;
  return 0;
}
