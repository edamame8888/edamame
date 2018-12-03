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
  int N,K;
  long ans;
  vector<long> p;
  vector<long> m;
  cin >> N >> K;
  long x[N];
  for(int i = 0; i < N;i++){
    scanf("%ld",&x[i]);
    if(x[i] > 0){
      p.push_back(x[i]);
    }else if(x[i] < 0){
      m.push_back(-x[i]);
    }else{
      K--;
    }
  }
  sort(m.begin(),m.end());
  if(K == 0){
    cout << 0 << endl;
    return 0;
  }
  // cout << "p" << endl;
  // for(int i = 0; i < p.size(); i++) cout << p[i] << endl;
  // cout << "m" << endl;
  // for(int i = 0; i < m.size(); i++) cout << m[i] << endl;
  ans = 1e15;
  for(int i = 0; i < p.size(); i++){
    if(i == K-1) {
      ans = min(ans,p[i]);
      break;
    }
    else if(i+1 < K){
      if( i + 1 + m.size() >= K) {
        //printf("i: = %d,ans = %ld + %ld\n",i,2*p[i] , m[K-i-2]);
        ans = min(ans,(2*p[i] + m[K-i-2]));
      }
    }

  }
  //printf("ans = %ld \n",ans);
  for(int i = 0; i < m.size(); i++){
    if(i == K-1) {
      ans = min(ans,m[i]);
      break;
    }
    else if(i < K-1){
      if( i + 1 + p.size() >= K) {
        //printf("i = %d,ans = %ld + %ld\n",i,2*m[i] , p[K-i-2]);
        ans = min(ans,(2*m[i] + p[K- i-2]));
      }
    }
  }

  cout << ans << endl;


  return 0;
}
