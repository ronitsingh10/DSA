class DSU {
private:
    vector<int> P, SZ;
    int components;

public:
    DSU(int n): components(n) {
        P.resize(n);
        SZ.assign(n, 1);
        iota(P.begin(), P.end(), 0);
    }

    bool union(int x, int y) {
        x = find(x), y = find(y);

        if (x == y) {
            return false;
        }

        if (SZ[x] > SZ[y]) {
            swap(x, y);
        }

        P[x] = y;
        SZ[y] += SZ[x];
        components--;
        return true;
    }

    int find(int x) {
        return P[x] == x ? x : P[x] = find(P[x]);
    }
};
