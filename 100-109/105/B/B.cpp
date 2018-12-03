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
  for(int i = 0;i < 100; i++){
    for(int j = 0;j < 100; j++){
      if( N == (i*4 + j*7) ){
        cout << "Yes" << endl;
        return 0;
      }else if(N < i*4+j*7) break;
    }
  }
  cout << "No" << endl;
  return 0;
}
