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
//二次元累積和を用いた解法

int main(){
  int N,M,Q;
  cin >> N >> M >> Q;
  vector<int> L(M);
  vector<int> R(M);
  vector<vector<int>> sum;
  sum = vector<vector<int>>(N+1,vector<int>(N+1,0));
  for(int i = 0; i < M; i++){
    scanf("%d %d",&L[i], &R[i]);
    sum[L[i]][R[i]] ++;
  }
  vector<int> p(Q);
  vector<int> q(Q);

  for(int i = 0; i < Q; i++) scanf("%d %d",&p[i], &q[i]);

  for(int i = 1; i <= N ; i++){
    for(int j = 1; j <= N; j++){
      sum[i][j] += sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
    }
  }

  for(int i = 0; i < Q; i++){
    int L = p[i];
    int R = q[i];
    printf("%d\n",sum[R][R] - sum[R][L-1] - sum[L-1][R] + sum[L-1][L-1]);
  }
  return 0;
}
