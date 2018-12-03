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
  int N, T, A ,A_prev = -10000000;
  cin >> N >> T;
  long ans = 0;
  for(int i = 0; i < N; i++){
    scanf("%d",&A);
    if(A <= T + A_prev){
      ans += (long)(A - A_prev);
    }else{
      ans += (long)T;
    }
    A_prev = A;
  }
  cout << ans << endl;
  return 0;
}
