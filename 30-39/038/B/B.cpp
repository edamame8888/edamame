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
  int H1,H2,W2,W1;
  cin >> H1 >> W1 >> H2 >> W2;
  if(H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2 ) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
