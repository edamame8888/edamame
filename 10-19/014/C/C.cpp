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
  int n,a,b;
  cin >> n;

  vector<int> paints(1000000+1,0);
  for(int i = 0; i < n; i++){
    cin >> a >> b;
    paints[a]++;
    if(b != 1000000) paints[b+1]--;
  }
  for(int i = 0; i < paints.size() - 1; i++) paints[i+1] += paints[i];

  long ans = -1;
  for(int i = 0; i < paints.size(); i++) ans = max(ans,(long)paints[i]);
  cout << ans << endl;
  return 0;
}
