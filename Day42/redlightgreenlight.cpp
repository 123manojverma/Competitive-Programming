#include <iostream>
#include <vector>

using namespace std;

int n, k;
vector<long long> p;
vector<int> d;

int memo[505][505][2];

int dfs(int i, int r, int dir) {
    if (memo[i][r][dir] == 1) {
        return memo[i][r][dir] = 3;
    }
    if (memo[i][r][dir] > 1) {
        return memo[i][r][dir];
    }

    memo[i][r][dir] = 1;

    int next_i, next_r, next_dir;

    if (dir == 0) { 
        long long red_val = (p[i] - d[i]) % k;
        if (red_val < 0) red_val += k;

        if (r == red_val) { 
            next_dir = 1;
            long long rem_p = p[i] % k;
            next_r = (2 * rem_p - r) % k;
            if (next_r < 0) next_r += k;
            next_i = i - 1;
        } else { 
            next_dir = 0;
            next_r = r;
            next_i = i + 1;
        }
    } else { 
        long long red_val = (p[i] + d[i]) % k;
        if (red_val < 0) red_val += k;

        if (r == red_val) { 
            next_dir = 0;
            long long rem_p = p[i] % k;
            next_r = (2 * rem_p - r) % k;
            if (next_r < 0) next_r += k;
            next_i = i + 1;
        } else { 
            next_dir = 1;
            next_r = r;
            next_i = i - 1;
        }
    }

    if (next_i < 0 || next_i >= n) {
        return memo[i][r][dir] = 2;
    }

    int res = dfs(next_i, next_r, next_dir);
    if (res == 3) {
        return memo[i][r][dir] = 3; 
    }
    return memo[i][r][dir] = 2;
}

void solve() {
    cin >> n >> k;
    p.resize(n);
    d.resize(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> d[i];

    for (int i = 0; i < n; ++i) {
        for (int r = 0; r < k; ++r) {
            memo[i][r][0] = 0;
            memo[i][r][1] = 0;
        }
    }

    int q;
    cin >> q;
    while (q--) {
        long long a;
        cin >> a;

        int idx = lower_bound(p.begin(), p.end(), a) - p.begin();

        if (idx == n) {
            cout << "YES\n";
        } else {
            int init_r = a % k;
            int ans = dfs(idx, init_r, 0);
            if (ans == 2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}