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

/*ex
UnionFind uf(N);
    double hosyu = 0;
    for (auto e : edges) {
        int u = e.second.first, v = e.second.second;
        if (uf.issame(u, v)) continue;
        hosyu += e.first;
        uf.merge(u, v);
    }
    cout << fixed << setprecision(10) << all - hosyu << endl;
*/
