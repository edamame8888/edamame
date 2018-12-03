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
  int N,K;
  double rate = 0;
  cin >> N >> K;
  vector<int> R(N);

  for(int i = 0; i < N; i++) cin >> R[i];
  sort(R.begin(),R.end());
  for(int i = K; i >= 1; i--){
    rate = (rate + R[ N - i])/(double)2;
  }
  printf("%f\n",rate);
  

  return 0;
}
