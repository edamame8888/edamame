#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <array>
#include <list>
#include <stack>
#include <valarray>

using namespace std;

int main(){
  int a,b,absHeight,height=0;
  cin >> a >> b;
  absHeight = b-a;
  for(int i = 1 ; i < absHeight;i++){
    height += i;
  }
  cout << (height - a) << endl;
  return 0;
}
