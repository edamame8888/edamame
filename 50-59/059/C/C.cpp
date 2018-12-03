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
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  ll prevArraySum,currentArraySum ;
  ll res , res1 = 1e15;

  rep(first,2){
    if(first % 2 && a[0] == 0){
      res = 1;
      prevArraySum = -1; currentArraySum = -1;
    }else if(first % 2 == 0 && a[0] == 0){
      res = 1;
      prevArraySum = 1; currentArraySum = 1;
    }else if(first % 2){
      res = 0;
      prevArraySum = a[0]; currentArraySum = a[0];
    }else if(a[0] > 0){
      res = a[0] + 1;
      prevArraySum = -1; currentArraySum = -1;
    }else{
      res = -a[0] + 1;
      prevArraySum = 1; currentArraySum = 1;
    }
    //cout << "debug point" << endl;
    FOR(i,1,n){
      if(prevArraySum > 0){//前回の累積和が正の場合
        currentArraySum = prevArraySum + a[i];
        if(currentArraySum >= 0){
          res += abs(-1 - currentArraySum);
          prevArraySum = -1;
        }else{
          prevArraySum = currentArraySum;
        }
      }else{//前回の累積和が負の場合
        currentArraySum = prevArraySum + a[i];
        if(currentArraySum <= 0){
          res += abs(1 - currentArraySum);
          prevArraySum = 1;
        }else{
          prevArraySum = currentArraySum;
        }
      }
    }
    res1 = min(res,res1);
  }

  cout << res1 << endl;
  return 0;
}
