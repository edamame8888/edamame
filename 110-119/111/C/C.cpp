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
  long n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  vector<int> odd(1010000,0);
  vector<int> even(1010000,0);
  vector<pair<int,int> > pairEven;
  vector<pair<int,int>> pairOdd;


  // count even odd
  for(int i = 0; i < n; i++){
    if(i % 2)   odd[a[i]] ++;
    else        even[a[i]] ++;
  }
  //cout << even[1] << ' ' << odd[1] << ' '<<even[2] << ' '<<odd[2];
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
  // out even max odd
  sort(pairEven.begin(),pairEven.end(),greater<pair<int,int>>());
  sort(pairOdd.begin(),pairOdd.end(),greater<pair<int,int>>());

  // == 多く登場するものを出力
  long oddTime = n / 2;
  long evenTime =  n - oddTime;
  long oddItr = 0;
  long evenItr = 0;
  while(true){
    //cout << pairEven[evenItr].second << " : "<<pairEven[evenItr].first << "  " << pairOdd[oddItr].second << " : "<<pairOdd[oddItr].first << endl;
    if(pairOdd[oddItr].second != pairEven[evenItr].second){
      cout << oddTime - pairOdd[oddItr].first + evenTime - pairEven[evenItr].first << endl;
      return 0;
    }else{
      if(pairOdd[oddItr].first < pairEven[evenItr].first){
        oddItr ++;
      }else evenItr ++;
    }
    if(oddItr >= pairOdd.size() || evenItr >= pairEven.size()) break;
  }

  if(oddItr >= pairOdd.size()){
    cout << oddTime + evenTime - pairEven[evenItr].first << endl;
    //cout << 1 << endl;
  }else{
    cout << oddTime - pairOdd[oddItr].first + evenTime << endl;
    //cout << 2 << endl;

  }
  return 0;
}
