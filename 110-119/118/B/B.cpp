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
  int x1,x2,y1,y2,x3,y3,x4,y4;
  int y[4];
  cin >> x1 >> y1 >> x2 >> y2;

  for(int x = -500; x <= 500; x++){
    for(int y = -500; y <= 500; y++){
      bool q1 = ( pow(x-x1,2) + pow(y-y1,2) ) == (pow(x2-x1,2) + pow(y2-y1,2));
      bool q2 = ((x-x1)*(x2-x1) + (y-y1)*( y2 -y1) == 0);
      if(q1 && q2){
        x4 = x;
        y4 = y;
        x3 = x4 + (x2 - x1);
        y3 = y4 + (y2 - y1);
        if((x2-x1)*(y4-y1) - (y2-y1)*(x4-x1) > 0) {cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl; return 0;}
      }
    }
  }


  return 0;
}
