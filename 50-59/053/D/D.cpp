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
  int n;
  cin >> n;
  deque<int> A;
  map<int,int> num_cnt;
  rep(i,n){
    int input;
    cin >> input;
    A.push_back(input);
    num_cnt[input]++;
  }
  int over_num = 0;

  for(auto x: num_cnt){
    if(x.second > 1){
      over_num += x.second-1;

    }
  }

  cout << n - 2*((over_num+1) / 2) << endl;
  return 0;
}
