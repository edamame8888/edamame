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
  int N,M;
  long long X,Y;
  cin >> N >> M >> X >> Y;
  long long a[N], b[M];
  for(int i = 0; i < N; i++) scanf("%lld",&a[i]);
  for(int i = 0; i < M; i++) scanf("%lld",&b[i]);

  long long current = 0;
  long long aPoint = 0, bPoint = 0, ans = 0;
  while(true){
    for(; aPoint < N; aPoint++){
      if(a[aPoint] >= current){current = a[aPoint] + X; ans ++; break;}
    }
    for(; bPoint < M; bPoint++){
      if(b[bPoint] >= current) {current = b[bPoint] + Y; ans ++; break;}
    }
    //if( current > (int)(1e9)) break;
    if(aPoint >= N || bPoint >= M) break;
  }
  cout << ans/2 << endl;

  return 0;
}
