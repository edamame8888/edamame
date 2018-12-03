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

int main(){
  int N,H;
  cin >> N >> H;
  vector<pair<int,int> > wepon(N);
  int maxAttack = -1;
  for(int i = 0; i < N; i++){
    pair<int,int> input;
    scanf("%d %d",&wepon[i].second ,&wepon[i].first);
    maxAttack = max(wepon[i].second,maxAttack);
  }
  sort(wepon.begin(), wepon.end(), greater<pair<int,int> >());
  int ans = 0;

  for(int i = 0; i < N; i++){
    if(wepon[i].first > maxAttack){
      H -= wepon[i].first;
      ans ++;
      if(H <= 0) {cout << ans << endl; return 0;}
    }
  }


  if(H % maxAttack == 0) cout << ans + H / maxAttack << endl;
  else cout << ans + H / maxAttack + 1 << endl;


}
