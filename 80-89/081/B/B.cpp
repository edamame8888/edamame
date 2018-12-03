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
vector<int> a;

bool checkArray(){
  for(int i = 0; i < a.size(); i++){
    if(a[i]%2 == 0) a[i] /= 2;
    else return false;
  }
  return true;
}

int main(){
  int n,cnt = 0;
  cin >> n;
  a = vector<int>(n);
  for(int i = 0; i < a.size(); i++) cin >> a[i];
  while(true){
    if(checkArray()) cnt++;
    else break;
  }
  cout << cnt << endl;
}
