#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <array>
#include <list>
#include <stack>
#include <valarray>

using namespace std;

int main(){
  int N,C;
  cin >> N >> C;
  int c[N][N];
  vector<vector<int>> t(3,vector<int>(C,0));
  int D[C][C];
  vector<int> MOD(C,0);

  for(int i = 0; i < C; i++) for(int j = 0; j < C; j++) cin >> D[i][j];
  for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) {
    cin >> c[i][j];
    t[(i+j)%3][c[i][j]-1] ++;
  }

  long ans = 1e15;
  for(int i = 0; i < C; i++){
    for(int j = 0; j < C; j++){
      if(i==j) continue;
      for(int k = 0; k < C; k++){
        if(i==k || j==k) continue;
        int cnt = 0;
        for(int l = 0;l < C; l++) cnt += D[l][i] * t[0][l];
        for(int l = 0;l < C; l++) cnt += D[l][j] * t[1][l];
        for(int l = 0;l < C; l++) cnt += D[l][k] * t[2][l];
        ans = min(ans,(long)cnt);
      }
    }
  }
  cout << ans << endl;
  
  return 0;
}
