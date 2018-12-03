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
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) scanf("%d",&a[i]);

  vector<int> odd(1010000,0);
  vector<int> even(1010000,0);
  vector<pair<int,int> > pairEven;
  vector<pair<int,int> > pairOdd;

  // count even odd
  for(int i = 0; i < n; i++){
    if(i % 2)   odd[a[i]] ++;
    else        even[a[i]] ++;
  }

  //int -> pair
  for(int i = 0; i < odd.size() ; i++) {
    if(odd[i] != 0){
      pair<int,int> x;
      x.first = odd[i];
      x.second = i;
      pairOdd.push_back(x);
    }
  }

  for(int i = 0; i < even.size(); i++) {
    if(even[i] != 0){
      pair<int,int> x;
      x.first = even[i];
      x.second = i;
      pairEven.push_back(x);
    }
  }

  pair<int,int> x;
  x.first = 0;
  x.second = 0;
  pairOdd.push_back(x);
  pairEven.push_back(x);

  sort(pairEven.begin(),pairEven.end(),greater<pair<int,int>>());
  sort(pairOdd.begin(),pairOdd.end(),greater<pair<int,int>>());

  // == 多く登場するものを出力
  int ans ;
  if(pairEven[0].second == pairOdd[0].second){
    ans = min(n - pairEven[0].first - pairOdd[1].first, n - pairEven[1].first - pairOdd[0].first);
  }else ans = n - pairEven[0].first - pairOdd[0].first;

  cout << ans << endl;
  return 0;
}
