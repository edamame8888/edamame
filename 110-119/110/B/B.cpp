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
  int n,m,X,Y;
  cin >> n >> m >> X >> Y;
  int x[n];
  int y[m];
  for(int i = 0; i < n; i++) cin >> x[i];
  for(int i = 0; i < m; i++) cin >> y[i];
  sort(x,x+n);
  sort(y,y+m);
  for(int i = x[n-1] + 1; i <= y[0]; i++){
    if(X < i && i <= Y){
      cout << "No War"  << endl;
      return 0;
    }
  }
  cout << "War" << endl;

  return 0;
}
