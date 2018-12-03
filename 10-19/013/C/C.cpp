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
/*
普通の食事: A円の出費をして、満腹度が B 増える。
質素な食事: C 円の出費をして、満腹度が D 増える。
食事抜き: 出費なしで、満腹度が E 減る。
*/

int main(){
  long long  N,A,B,C,D,E;
  long long  ans = (long long )1e15;
  long long  Ctime,Atime;
  long long H;
  cin >> N >> H;
  cin >> A >> B >> C >> D >> E;

  for(Atime = 0; Atime <= N; Atime++){
    if(H + (B + E) * Atime - E * N > 0){
      ans = min(ans ,Atime * A);
    }else{
      Ctime = ( E*(N-Atime) - H - B * Atime)/(D+E) + 1;
      if(Ctime + Atime <= N ){
        ans = min(ans,(Atime * A + Ctime * C));
      }
    }
  }
  cout << ans << endl;

  return 0;
}
