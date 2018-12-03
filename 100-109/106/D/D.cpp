#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

//二次元累積和を用いた解法
vector<vector<int>> sum;
int N,M,Q;

void buildSumTable(vector<int>L, vector<int> R){
  sum = vector<vector<int>>(N+1,vector<int>(N+1,0));
  for(int i = 0; i < M; i++){
    sum[L[i]][R[i]] ++;
  }
  for(int i = 1; i <= N ; i++){
    for(int j = 1; j <= N; j++){
      sum[i][j] += sum[i-1][j];
      sum[i][j] += sum[i][j-1];
      sum[i][j] -= sum[i-1][j-1];
    }
  }
}

int getSumLange(int L, int R){
  return sum[R][R] - sum[R][L-1] - sum[L-1][R] + sum[L-1][L-1];
}


int main(){

  cin >> N >> M >> Q;
  vector<int> L(M);
  vector<int> R(M);
  for(int i = 0; i < M; i++){
    scanf("%d %d",&L[i], &R[i]);
  }
  vector<int> p(Q);
  vector<int> q(Q);

  for(int i = 0; i < Q; i++){
    scanf("%d %d",&p[i], &q[i]);
  }
  buildSumTable(L,R);
  for(int i = 0; i < Q; i++){
    printf("%d\n",getSumLange(p[i],q[i]));
  }
  return 0;
}
