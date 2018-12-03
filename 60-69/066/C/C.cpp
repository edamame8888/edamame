#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  int n;
  cin >> n;
  deque<int> que;
  rep(i,n){
    int a;
    cin >> a;
    if(n % 2){//odd
      if(i % 2) que.push_back(a);// even
      else      que.push_front(a); //odd
    } else { //even
      if(i % 2) que.push_front(a);// even
      else      que.push_back(a); //odd
    }
  }

  while(que.empty() == false){
    if(que.size() == 1){
      cout << que.front() << endl;
    }else{
      cout << que.front() << ' ';
    }
    que.pop_front();
  }

  return 0;
}
