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

  int R, C, K, N;
  cin >> R >> C >> K >> N;

  vector<int> r(R,0);//r[i] -> i行にあるアメの個数
  vector<int> c(C,0);//c[i] -> i列にあるアメの個数
  vector<pair<int,int>> candy(N);//candy[i] -> 入力したi個目のアメがある座標(pair)
  //input & make r[i],c[i]
  for(int i = 0; i < N; i++){
    scanf("%d%d",&candy[i].first, &candy[i].second);
    candy[i].first--;
    candy[i].second--;
    r[candy[i].first] ++;
    c[candy[i].second] ++;
  }

  //行に含まれるアメの個数がXであるものの個数を記録する
  vector<int> rCandy(100001,0);
  for(int i = 0; i < R; i++){
    rCandy[r[i]] ++;
  }

  //列に含まれるアメの個数がXであるものの個数を記録する
  vector<int> cCandy(100001,0);
  for(int i = 0; i < C; i++){
    cCandy[c[i]] ++;
  }
  //(行に存在するアメの数)+(列に存在するアメの数) == K の個数をansに記録する。
  long long ans = 0;
  for(int i = 0; i <= K; i++){
    ans += (long long)rCandy[i] * (long long)cCandy[K-i];
  }
  /*
    アメの置いてある位置が (行に存在するアメの数)+(列に存在するアメの数) == K を満たすならば、
    この位置から飴を拾ってもKにならない為、ansから1を引く。

    アメの置いてある位置が (行に存在するアメの数)+(列に存在するアメの数) == K+1 を満たすならば、
    この位置から飴を拾うと個数がKになる為、ansに1を足す。
  */
  for(int i = 0; i < N; i++){
    int sum = r[candy[i].first] + c[candy[i].second];
    if(sum == K ) ans--;
    if(sum == K + 1 ) ans++;
  }

  //output
  cout << ans << endl;
  return 0;
}
