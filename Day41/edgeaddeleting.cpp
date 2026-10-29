#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ops(m);
    for (int i = 0; i < m; i++) {
        cin >> ops[i];
    }

    vector<int> dist1(n + 1, -1);
    vector<int> branch(n + 1, 0);
    queue<int> q;

    dist1[1] = 0;
    for (int child : adj[1]) {
        dist1[child] = 1;
        branch[child] = child;
        q.push(child);
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist1[v] == -1) {
                dist1[v] = dist1[u] + 1;
                branch[v] = branch[u];
                q.push(v);
            }
        }
    }

    vector<int> distN(n + 1, -1);
    distN[n] = 0;
    q.push(n);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (distN[v] == -1) {
                distN[v] = distN[u] + 1;
                q.push(v);
            }
        }
    }

    int target_branch = branch[n];
    int ans = dist1[n];

    for (int v : ops) {
        if (branch[v] == target_branch) {
            ans = max(ans, 1 + distN[v]);
        }
    }

    cout << ans << "\n";
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