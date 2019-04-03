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

struct UnionFind {
    vector<int> par; // 親ノード
    vector<int> rank; // ランク

    UnionFind(int n = 1) {
        init(n);
    }

    void init(int n = 1) {
        par.resize(n); rank.resize(n);
        for (int i = 0; i < n; ++i) par[i] = i, rank[i] = 0;
    }

    int root(int x) {
        if (par[x] == x) {
            return x;
        }
        else {
            int r = root(par[x]);
            return par[x] = r;
        }
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (rank[x] < rank[y]) swap(x, y);
        if (rank[x] == rank[y]) ++rank[x];
        par[y] = x;
        return true;
    }
};

int main(){
  ll n,m;
  cin >> n >> m;
  vector<PII> load;
  rep(i,m){
    int a,b;
    cin >> a >> b;
    a--,b--;
    load.push_back(make_pair(a,b));
  }
  UnionFind uf(n);
  VLL rootNum(n,1);

  ll current = (n-1)*(n)/2;
  VLL ans;
  ans.push_back(current);

  for(int i = m-1; i >= 0; i--){
    int a =load[i].first;
    int b =load[i].second;
    if(uf.issame(a, b)){
      ans.push_back(current);
      continue;
    }
    int anum = rootNum[uf.root(a)];
    int bnum = rootNum[uf.root(b)];
    uf.merge(a, b);


    rootNum[uf.root(a)] = anum+bnum;

    //debug
    // rep(i,n) cout << rootNum[i] << " ";
    // cout << endl;

    current -= anum * bnum;
    ans.push_back(current);
  }

  //cout << "ans size = " << ans.size() << endl;
  for(int i = ans.size()-2; i >= 0; i--){
    cout << ans[i] << endl;
  }
  return 0;
}
