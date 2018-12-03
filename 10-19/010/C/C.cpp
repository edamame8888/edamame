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
  int tx_start , ty_start , tx_goal, ty_goal, input_time,T,V;
  int girl_x , girl_y;

  cin >> tx_start >> ty_start >> tx_goal >> ty_goal >> T >> V >> input_time;

  for(int i = 0; i < input_time; i++){
    cin >> girl_x >> girl_y ;

    double dist = 0;
    dist += sqrt(pow((girl_x - tx_start),2) + pow((girl_y - ty_start),2));  //start -> girl's house
    dist += sqrt(pow((girl_x - tx_goal),2) + pow((girl_y - ty_goal),2));    //girl's house -> goal

    double max_dist = V * T;
    if(max_dist >= dist){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
