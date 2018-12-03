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
  int N,D,K;
  cin >> N >> D >> K;
  vector<pair<int,int>> days(D);
  vector<pair<int,int>> kingdoms(K);
  for(int i = 0; i < D; i++) cin >> days[i].first >> days[i].second ;
  for(int i = 0; i < K; i++) cin >> kingdoms[i].first >> kingdoms[i].second;

  for(int i = 0; i < K; i++){
    int current = kingdoms[i].first;
    int goal = kingdoms[i].second;
    for(int j = 0; j < D; j++){
      int l = days[j].first;
      int r = days[j].second;
      //移動完了
      if( l <= current && current <= r && l <= goal && goal <= r){
        cout << j + 1 << endl;
        break;
      }else if( l <= current && current <= r ){
        if(abs(current - goal) > abs(r - goal)) current = r;
        if(abs(current - goal) > abs(l - goal)) current = l;
      }
    }
  }
  return 0;
}
