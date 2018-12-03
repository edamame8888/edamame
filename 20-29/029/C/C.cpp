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
  int N;
  cin >> N;
  vector<int> bit(N,0);
  int lim = pow(3,N);
  for(int i = 0; i < lim; i++){
    int x = i;
    int cnt = 0;
    while(x != 0){
      if(x%3 == 0) bit[cnt] = 0;
      else if(x%3 == 1) bit[cnt] = 1;
      else if(x%3 == 2) bit[cnt] = 2;
      x /= 3;
      cnt ++;
    }

    for(int j = N-1; j >= 0; j--){
      if(bit[j] == 0)  cout << 'a' ;
      else if(bit[j] == 1) cout << 'b';
      else if(bit[j] == 2) cout << 'c';
    }
    cout << endl;
  }
  return 0;
}
