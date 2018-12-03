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
  int n,d,x,a;
  cin >> n >> d >> x;
  int ans = x + n; // 残りのx個と初日に必ず食べるアメの個数を加算
  d--;//残りの日数
  for(int i = 0; i < n; i++){
    cin >> a;
    ans += d / a; //残りの日数で食べる個数を加算
  }
  cout << ans << endl;
}
