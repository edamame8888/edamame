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
  vector<bool> prime((int)(1e5 + 1),true);
  prime[0] = false;
  prime[1] = false;
  for(int i = 2; i*i < prime.size(); i++){
    if(prime[i]){
      int x = 2;
      while(x*i <= prime.size()){
        prime[x*i] = false;
        x++;
      }
    }
  }
  vector<int> sumCnt((int)(1e5+1),0);
  for(int i = 2; i < sumCnt.size(); i++){
    if(prime[i] && prime[(i+1)/2]) sumCnt[i] = 1;
  }
  for(int i = 0; i < sumCnt.size() - 1; i++){
    sumCnt[i+1] += sumCnt[i];
  }
  int Q;
  cin >> Q;
  for(int i = 0; i < Q; i++){
    int l,r;
    cin >> l >> r;
    cout << sumCnt[r] - sumCnt[l-1] << endl;
  }
  return 0;
}
