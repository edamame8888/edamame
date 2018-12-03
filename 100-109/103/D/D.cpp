#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map> // pair
#include <functional>
using namespace std;
int N, M;
vector<pair<int, int> > pairs;
void solve(){
  sort(pairs.begin(), pairs.end());
  //for(int i = 0; i < M; i++) cout << "first = " << pairs[i].first << " second = " << pairs[i].second << endl;
  int cutPlace;
  int cnt = 0;
  for(int i = 0; i < M; i++){
    if(i == 0){
      cutPlace = pairs[i].first;
      cnt++;
    }else if(cutPlace > pairs[i].second) continue;
    else{
      cutPlace = pairs[i].first;
      cnt++;
    }
  }
  cout << cnt << endl;
  return ;
}

int main(){
  cin >> N >> M;
  pairs = vector<pair<int, int> >(M);
  for(int i = 0; i < M; i++){
    cin >> pairs[i].second >> pairs[i].first ;
  }
  solve();
  return 0;
}
