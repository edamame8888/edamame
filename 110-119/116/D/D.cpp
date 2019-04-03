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


int main(){
  int N,K;
  cin >> N >> K;
  vector<PLL> sushi(N);
  VLL kindsMax;
  rep(i,N){
    int t,d;
    cin >> t >> d;
    t--; // kinds is 0 origin
    sushi[i]= make_pair(t,d);
  }

  sort(all(sushi));
  map<int,int> kinds;
  int cnt = -1;
  rep(i,N){
    kinds[sushi[i].first]++;
    if(kinds[sushi[i].first] == 1){
      cnt++;
      kindsMax.push_back(sushi[i].second);
    }else{
      kindsMax[cnt] = max(kindsMax[cnt],sushi[i].second);
    }
  }

  sort(sushi.rbegin(),sushi.rend());
  VLL sumSushi;
  rep(i,N){
    if(i == 0) continue;
    if(sushi[i].first != sushi[i-1].first) continue;
    sumSushi.push_back(sushi[i].second);
  }

  sort(sumSushi.rbegin(), sumSushi.rend());
  sort(kindsMax.rbegin(),kindsMax.rend());

  // sumSuhsi累積和構築
  rep(i,sumSushi.size()-1){
    sumSushi[i+1] += sumSushi[i];
  }

  // kindsMax累積和構築
  rep(i,kindsMax.size()-1){
    kindsMax[i+1] += kindsMax[i];
  }

  ll ans = 0;
  for(ll i = 1 ; i <= K; i++){
    //cout << ans << endl;
    if(kindsMax.size() < i) continue;
    if(sumSushi.size() <= K-i-1) {
      ans = max(kindsMax[i-1]  + i * i , ans);
    }else{
      ans = max(kindsMax[i-1] + sumSushi[K-i-1] + i * i , ans);
    }
  }

  cout << ans << endl;
  return 0;
}
