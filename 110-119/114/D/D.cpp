#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
typedef long long ll;
int dp[100][100];

int main(){
  int n;
  cin >> n;

  //find prime num
  vector<bool> prime(n+1,true);
  prime[0] = false;
  prime[1] = false;
  FOR(i,2,n+1){
    if(prime[i] == true){
      int x = 2;
      while(x*i <= n){
    	prime[x*i] = false;
    	x++;
      }
    }
  }

  //make prime num array
  vector<int> primeNum;
  FOR(i,2,n+1){
    if(prime[i]){
      primeNum.push_back(i);
    }
  }

  map<int,int> primeCnt;
  FOR(i,2,n+1){
    int tmp = i;
    rep(j,primeNum.size()){
        while(tmp%primeNum[j]==0){
            primeCnt[primeNum[j]] ++;
            tmp /= primeNum[j];
        }
    }

  }
  vector<int> a;

  for(auto itr: primeCnt){
    a.push_back(itr.second);
  }

  dp[0][1] = 1;
  for (int i = 0; i < a.size(); i++) {
    for (int j = 1; j <= 75 ; j++) {
      for (int e = 0; e <= a[i]; e++) {
        if (j * (e + 1) < 100) {
          dp[i + 1][j * (e + 1)] += dp[i][j];
        }
      }
    }
  }

  cout << dp[a.size()][75] << endl;

  return 0;
}
