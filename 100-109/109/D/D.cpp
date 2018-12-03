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
struct XY{
  int h;
  int w;
};
int H,W;
int a[500][500];
vector<string> outStr;
void output(XY first,XY second,vector<XY> way){
  XY prev = first;
  string out;
  for(int i = 0; i < way.size(); i++){
    out = "" + to_string(prev.h + 1) + " " + to_string(prev.w + 1) + " " + to_string(way[i].h + 1) + " " + to_string(way[i].w + 1);
    outStr.push_back( out );
    prev = way[i];
  }
  out = "" + to_string(prev.h + 1) + " " + to_string(prev.w + 1) + " " + to_string(second.h + 1) + " " + to_string(second.w + 1);
   outStr.push_back(out);
  return ;
}


int main(){
  cin >> H >> W;
  int a[H][W];
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> a[i][j];

    }
  }

  bool pairNum = false;
  XY first ,second, mid;
  vector<XY> way;
  for(int i = 0; i < H; i++){
    if(i%2 == 0){
      for(int j = 0; j < W; j++){
        if(a[i][j] % 2 == 1){
          if(pairNum){
            second.h = i;
            second.w = j;
            output(first,second,way);
            way.clear();
            pairNum = false;
          }else{
            pairNum = true;
            first.h = i;
            first.w = j;
          }
        }else{
          if(pairNum){
            mid.h = i;
            mid.w = j;
            way.push_back(mid);
          }
        }
      }
    }else{
      for(int j = W-1; j >= 0; j--){
        if(a[i][j] % 2 == 1){
          if(pairNum){
            second.h = i;
            second.w = j;
            output(first,second,way);
            way.clear();
            pairNum = false;
          }else{
            pairNum = true;
            first.h = i;
            first.w = j;
          }
        }else{
          if(pairNum){
            mid.h = i;
            mid.w = j;
            way.push_back(mid);
          }
        }
      }
    }
  }
  cout << outStr.size() << endl;
  for(int i = 0; i < outStr.size(); i++){
    cout << outStr[i] << endl;
  }
  return 0;
}
