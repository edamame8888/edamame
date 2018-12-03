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

int main(){
  int n,m,l,r,s;
  int totalScore = 0;
  cin >> n >> m;
  vector<int> caveScore(m,0);
  for(int i = 0; i < n; i++){
    scanf("%d%d%d",&l,&r,&s);
    totalScore += s;
    caveScore[l-1] += s;
    if(r < m) caveScore[r] -= s;
  }
  // 累積和配列の構築
  for(int i = 0; i < m-1 ; i++){
    caveScore[i+1] += caveScore[i];
  }

  //選ばない宝石の種類を決めて
  //その宝石を取らないと得られないポイントを引く
  int ans = 0;
  for(int i = 0; i < m; i++){
    ans = max(ans,totalScore - caveScore[i]);
  }

  cout << ans << endl;

  return 0;
}
