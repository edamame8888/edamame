#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
typedef long long ll;


int main(){
  int n;
  cin >> n;
  if(n == 25) cout << "Christmas"<< endl;
  else if(n == 24) cout << "Christmas Eve" << endl;
  else if(n == 23)  cout << "Christmas Eve Eve" << endl;
  else if(n ==22) cout << "Christmas Eve Eve Eve" << endl;
  return 0;
}
