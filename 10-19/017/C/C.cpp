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

struct CAVE{
  int s;
  int l;
  int r;
};
int main(){
  int n,m,l,r,s;
  CAVE input;
  cin >> n >> m;
  vector<CAVE> cave;
  for(int i = 0; i < n; i++){
    scanf("%d%d%d",&l,&r,&s);
    input.s = s;
    input.l = l;
    input.r = r;
    cave.push_back(input);
  }
  int maxScore = 0;
  for(int i = 1; i <= m; i++){
    int score = 0;
    for(int j = 0; j < n; j++){
      if(i < cave[j].l || cave[j].r < i){
        score += cave[j].s;
      }
    }
    maxScore = max(maxScore,score);
  }
  cout << maxScore << endl;

  return 0;
}
