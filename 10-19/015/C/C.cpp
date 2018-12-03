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
int N,K;
int T[5][5];
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

bool dfs(int numQ, int xorVal){
  if(numQ == N) return (xorVal == 0);
  for(int i = 0; i < K; i++){
    if(dfs(numQ + 1 ,xorVal ^ T[numQ][i])) return true;
  }

  return false ;
}

int main(){
  cin >> N >> K;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < K; j++){
      cin >> T[i][j];
    }
  }
  if(dfs(0,0)) cout << "Found" << endl;
  else cout << "Nothing" << endl;
  return 0;
}
