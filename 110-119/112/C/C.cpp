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
  int x[n];
  int y[n];
  int h[n];
  for(int i = 0; i < n; i++){
    cin >> x[i] >> y[i] >> h[i];
  }

  for(int cx = 0; cx <= 100; cx++){
    for(int cy = 0; cy <= 100; cy++){
      int prevH;
      bool flag = true;
      bool firstPrevH = false;
      for(int i = 0; i < n; i++){
        if(firstPrevH == false && h[i] != 0){
          prevH = h[i] + abs(x[i] - cx) + abs(y[i] - cy);
          firstPrevH = true;
        }else{
          if(h[i] == 0 || prevH == h[i] + abs(x[i] - cx) + abs(y[i] - cy)) continue;
          else flag = false;
        }

      }
      if(flag){
        if(firstPrevH){
          bool flag2 = true;
          for(int i = 0; i < n; i++){
            if(h[i] == max(0, prevH - abs(x[i] - cx) - abs(y[i] - cy))) continue;
            else flag2 = false;
          }
          if(flag2) cout << cx << ' ' << cy << ' ' << prevH << endl;

        }
      }
    }
  }
  return 0;
}
