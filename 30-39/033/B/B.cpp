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
  int n;
  cin >> n;
  vector<pair<int,string>> citys;
  pair<int , string> input_city;
  int sum = 0;

  for(int i = 0; i < n; i++){
    cin >> input_city.second >> input_city.first;
    sum += input_city.first;
    citys.push_back(input_city);
  }

  sort(citys.begin(),citys.end());

  if(sum/2. < citys[n-1].first){
    cout << citys[n-1].second << endl;
  } else {
    cout << "atcoder" << endl;
  }


  return 0;
}
