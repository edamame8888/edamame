#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
const int mod = 1e9 + 7;
vector< vector<long long> > memo(1010,vector<long long>(1010,0));
vector< vector<int> > a(1010,vector<int>(1010));
int H,W;
const int dx[] = {0,1,-1,0};
const int dy[] = {1,0,0,-1};

long long dfs(int y, int x){
  if(memo[y][x] > 0) return memo[y][x];
  memo[y][x] = 1;
  rep(dir,4){
    if((y+dy[dir]) >= 0 && (y + dy[dir]) < H &&
       (x+dx[dir]) >= 0 && (x + dx[dir]) < W && a[y][x] < a[y + dy[dir]][x+dx[dir]]){
         memo[y][x] = (memo[y][x] + dfs(y+dy[dir],x + dx[dir])) % mod ;
       }
  }
  return memo[y][x];
}

int main(){

  cin >> H >> W;

  rep(i,H)rep(j,W){
    scanf("%d",&a[i][j]);
  }
  long long ans = 0;
  rep(i,H)rep(j,W){
    ans = (ans + dfs(i,j)) % mod;
  }

  cout << ans << endl;
  return 0;
}
