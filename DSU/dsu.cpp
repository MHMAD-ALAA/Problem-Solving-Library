class DSU{
    const int N = 2e5 + 5;
    int par[N], siz[N];

    void init(int n) {
        for (int i = 0; i < n; ++i) par[i] = i, siz[i] = 1;
    }

    int find(int x) {
        if (par[x] == x) return x;
        return par[x] = find(par[x]);
    }

    int join(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) return siz[a];

        if (siz[a] > siz[b]){
            par[b] = a, siz[a] += siz[b];
            return siz[a];
        }
        else {
            par[a] = b, siz[b] += siz[a];
            return siz[b];
        }
    }

    struct edge {
        int u, v, c;
    };

};
