#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
typedef long long ll;


int main(){
  string s;
  cin >> s;
  ll minX = 1e9;
  rep(i,s.size()-2){
    string tmp;
    tmp = s.substr(i,3);
    //cout << tmp << endl;
    ll x = toInt(tmp);
    minX  = min(minX,abs(x-753));
  }
  cout << minX << endl;
  return 0;
}
