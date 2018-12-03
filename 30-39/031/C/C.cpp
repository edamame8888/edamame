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
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  int aMaxTScore,maxTScore = -1000000;
  for(int taka = 0; taka < n; taka++){
    int maxAScore = -1000000;
    for(int aoki = 0; aoki < n; aoki++){
      if(taka == aoki) continue; //takahashiとaokiは同じ場所に丸をつけれない
      int left = min(taka,aoki);
      int right = max(taka,aoki);
      int aScore = 0, tScore = 0;
      for(int i = left, cnt = 1; i <= right; i++,cnt++){
        if(cnt%2) tScore += a[i];//taka
        else      aScore += a[i];
      }
      if(maxAScore < aScore){
        maxAScore = aScore;
        aMaxTScore = tScore;
      }
    }
    maxTScore = max(maxTScore,aMaxTScore);
  }
  cout << maxTScore << endl;
  return 0;
}
