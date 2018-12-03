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
  double deg ,dis ,w ;
  int dir = 15;
  string s[] = { "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW" ,"N"};
  cin >> deg >> dis;
  deg *= 10;
  for(int i = 0; i <16 ; i ++){
    //cout << 1125 + 2250 * i << " <= " << deg << " <" << 3375 + i * 2250 << endl;
     if(1125 + 2250 * i  <= deg &&  deg < 3375 + i * 2250 ){
       dir = i;
       break;
     }
  }
  dis = round(dis * 10 / 60);
  if(dis <= 2)        w = 0;
  else if(dis <= 15)  w = 1;
  else if(dis <= 33)  w = 2;
  else if(dis <= 54)  w = 3;
  else if(dis <= 79)  w = 4;
  else if(dis <= 107) w = 5;
  else if(dis <= 138) w = 6;
  else if(dis <= 171) w = 7;
  else if(dis <= 207) w = 8;
  else if(dis <= 244) w = 9;
  else if(dis <= 284) w = 10;
  else if(dis <= 326) w = 11;
  else if(dis >= 327) w = 12;

  if(w == 0) cout << "C "<< w << endl;
  else cout << s[dir] << " "<< w << endl;
  return 0;
}
