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
  long long N, K;
  cin >> N >> K;
  vector<pair<int,int>> array(N);
  for(int i = 0; i < N; i++){
    cin >> array[i].first >> array[i].second;
  }
  sort(array.begin(),array.end());

  for(int i = 0; i < N; i++){
    K -= array[i].second;
  //  cout << K << endl;
    if(K <= 0){
      cout << array[i].first << endl;
      return 0;
    }
  }
  return 0;
}
