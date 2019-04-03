#include <bits/stdc++.h>
using namespace std;

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

//container util
#define all(x) (x).begin(),(x).end()

//typedef
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;


//conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

const int num[] = {-1,2,5,5,4,5,6,3,7,6};
int main(){
  ll N,M;
  cin >> N >> M;
  VLL a(M);
  VLL A(M);

  vector<PII> Ap;
  rep(i,M){
     cin >> a[i];
     Ap.push_back( make_pair(num[a[i]],i) );
  }
  sort(all(Ap));
  rep(i,M) A[i] = a[Ap[i].second];

  vector<char> numChar;
  rep(i,M){
    string s = toString(A[i]);
    numChar.push_back(s[0]);
  }
  
  vector<string> dp(10101,"x");

  //達成できる最大桁数を計算する。

  dp[0] = "";

  rep(i,M){
    rep(j,N-num[ A[i] ]+1)
      if(dp[j] != "x"){
        if(dp[ j + num[ A[i] ] ] != "x"){
          //長さ比較
          if(dp[ j + num[ A[i] ] ].size() <  dp[j].size() + 1) dp[ j + num[ A[i] ] ] = dp[j] + numChar[i];
          else if(dp[ j + num[ A[i] ] ].size() >  dp[j].size() + 1) continue;
          else if(dp[ j + num[ A[i] ] ].size() == dp[j].size() + 1){
            //文字列辞書式順比較
            string headS = dp[j] + numChar[i];
            string tailS = numChar[i] + dp[j];
            dp[ j + num[ A[i] ] ] = max(tailS,max(headS,dp[ j + num[ A[i] ] ]));
          }
        }
        else{
          //文字列辞書式順比較
          string headS = dp[j] + numChar[i];
          string tailS = numChar[i] + dp[j];
          dp[ j + num[ A[i] ] ] = max(tailS,headS);
        }
      }
  }

  cout << dp[N] << endl;

  return 0;
}
