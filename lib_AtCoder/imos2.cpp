int imos2(int x1, int y1, int x2, int y2){
  return board[y1][x1] - board[y1][x2] - board[y2][x1] + board[y2][x2];
}


rep(i,2*K+1)FOR(j,1,2*K+1) {board[i][j] += board[i][j-1];}
FOR(i,1,2*K+1)rep(j,2*K+1) {board[i][j] += board[i-1][j];}
