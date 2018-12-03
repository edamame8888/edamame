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

int N,M;


int main(){
  int N,K;
  cin >> N >> K;
  if(N < K) cout << 1 << endl;
  else if(N % K == 0){
    cout << 0 << endl;
  }else{
    cout << 1 << endl;
  }


  return 0;
}
