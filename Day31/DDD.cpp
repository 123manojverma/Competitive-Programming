#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, l;
    cin >> n >> m >> l;

    long long sum = 0;
    long long minOdd = LLONG_MAX;

    for (int i = 0; i < l; i++) {
        int x;
        cin >> x;

        sum += x;

        if (x & 1) {
            minOdd = min(minOdd, (long long)x);
        }
    }

    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        --u;
        --v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    const long long INF = 1e18;

    vector<array<long long, 2>> dist(
        n,
        {INF, INF}
    );

    queue<pair<int, int>> q;

    dist[0][0] = 0;
    q.push({0, 0});

    while (!q.empty()) {
        int u = q.front().first;
        int parity = q.front().second;
        q.pop();

        for (int v : adj[u]) {

            int newParity = parity ^ 1;

            if (dist[v][newParity] != INF)
                continue;

            dist[v][newParity] =
                dist[u][parity] + 1;

            q.push({v, newParity});
        }
    }

    long long best[2] = {-1, -1};

    best[sum & 1] = sum;

    if (minOdd != LLONG_MAX) {
        best[(sum & 1) ^ 1] =
            sum - minOdd;
    }

    string ans;

    for (int v = 0; v < n; v++) {

        bool possible = false;

        for (int parity = 0; parity < 2; parity++) {

            if (best[parity] == -1)
                continue;

            if (dist[v][parity] <= best[parity]) {
                possible = true;
                break;
            }
        }

        ans += possible ? '1' : '0';
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}