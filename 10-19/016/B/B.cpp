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
  int a,b,c;
  cin >> a >> b >> c;
  if(a+b == c && a-b == c){
    cout << "?" << endl;
  }else if(a+b == c){
    cout << "+" << endl;
  }else if(a-b == c){
    cout << "-" << endl;
  }else{
    cout << "!" << endl;
  }
  return 0;
}