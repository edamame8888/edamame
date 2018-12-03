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
  int n, a, b, d,current = 0;
  string s;
  cin >> n >> a >> b;
  for(int i = 0; i < n; i++){
    cin >> s >> d;
    if(s == "West") d = -d;

    if(a <= abs(d) && abs(d) <= b){
      current += d;
    }else if(a > abs(d)){
      current += a*(d /(int)abs(d));
    }else{
      current += b*(d /(int)abs(d));
    }
    //cout << current << endl;
  }
  if(current == 0) cout << 0 << endl;
  else if(current > 0) cout << "East" << " " << current << endl;
  else cout << "West" << " " << -current << endl;
  return 0;
}
