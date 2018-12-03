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
  int a,b,cnt = 0;
  cin >> a >> b;
  for(int i = a; i <= b; i++ ){
    int v = i/10000;
    int w = i/1000 % 10;
    int y = i /10 % 10;
    int z = i % 10;
    //cout << v << " " << w;
    if(v==z && y==w) cnt ++;
  }
  cout << cnt << endl;
}
