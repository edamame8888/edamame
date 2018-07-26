#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map> // pair
#include <functional>
using namespace std;
int N, M;
vector<pair<int, int> > pairs(100010);
void solve(){
  sort(pairs.begin(), pairs.end(), greater<pair<int, int> >());
  int cutPlace = 1000010;
  int cutMin = -1;
  int res = 0;
  for(int i = 0; i < M; i++){
    if(cutPlace > pairs[i].first && pairs[i].second >= cutMin){
      cutPlace = pairs[i].first;
      cutMin = pairs[i].second;
      res++;
    }
  }
  cout << res << endl;
  return ;
}
int main(){
  cin >> N >> M;
  for(int i = 0; i < M; i++){
    cin >> pairs[i].second >> pairs[i].first ;
  }
  solve();
  return 0;
}
