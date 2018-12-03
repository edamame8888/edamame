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
static const int INF = (1<<29);
int main(){
  vector <int> v;
  int yen,time=0;
  int T[100001];
  v.push_back(1);
  v.push_back(0);
  for(int i=1;  pow(9,i) <= 100000 ;i++){
    v.push_back(pow(9,i));
  }

  for(int i=1;  pow(6,i) <= 100000; i++ ){
    v.push_back(pow(6,i));
  }

  sort(v.begin(), v.end());

  cin >> yen;

  for(int i = 0; i <= 100000;i++) T[i] = INF;
  T[0] = 0;
  for(int i = 1; i < v.size(); i++){
    for(int j = 0; j + v[i] <= yen; j++){
      T[j+v[i]] = min(T[j+v[i]],T[j]+1);
      //cout << "T[" << j+v[i] << "] = " << T[j+v[i]] << endl;
    }
  }
  cout << T[yen] << endl;
  return 0;
}
