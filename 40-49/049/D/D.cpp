#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;

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
  int N,K,L;
  cin >> N >> K >> L;
  UnionFind road(N);
  UnionFind train(N);
  rep(i,K){
    int p,q;
    cin >> p >> q;
    p--; q--;
    road.merge(p,q);
  }

  rep(i,L){
    int r,s;
    cin >> r >> s;
    r--; s--;
    train.merge(r,s);
  }

  map<pair<int,int>, int > Route;
  rep(i,N){
    Route[make_pair(train.root(i),road.root(i))] ++;
  }
  rep(i,N){
    //cout << i<< " : "<<townRoad[i] << ' ' << townTrain[i] << endl;
    if(i != N-1) cout << Route[make_pair(train.root(i),road.root(i))] <<  ' ';
    else         cout << Route[make_pair(train.root(i),road.root(i))] <<  endl;
  }
  return 0;
}
