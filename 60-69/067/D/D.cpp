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
#define INF 1e9

int n;
PII dist[(int)(1e5+10)];
VI board[(int)(1e5+10)];
void dfs(int x, bool snukeFlag){
  int next;
  rep(i,board[x].size()){
    next = board[x][i];
    if(snukeFlag == true &&
       dist[next].first > dist[x].first + 1 ){
         dist[next].first = dist[x].first + 1;
         dfs(next,snukeFlag);
    }

    if(snukeFlag == false &&
       dist[next].second > dist[x].second + 1 ){
         dist[next].second = dist[x].second + 1;
         dfs(next,snukeFlag);
    }
  }
}
int main(){
  cin >> n;
  int to ,from;
  rep(i,n-1){
    cin >> to >> from;
    to--; from--;
    board[to].push_back(from);
    board[from].push_back(to);
  }

  //!!!!!! seoncd = Snuke
  //!!!!!! first  = Fennec

  rep(i,n) dist[i] = make_pair(INF,INF);
  dist[0].second = 0;
  dist[n-1].first = 0;


  dfs(0,false);   //Fennecc
  dfs(n-1,true);  // Snuke
  int fennec = 0;
  rep(i,n){
    if(dist[i].first >= dist[i].second ){
      fennec++;
    }
  }
  if(fennec > n - fennec) cout << "Fennec" << endl;
  else                     cout << "Snuke"  << endl;
  return 0;
}
