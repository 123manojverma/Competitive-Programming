#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int k;
    cin >> k;
    
    int hub_id = -1;
    vector<vector<int>> hub_adj;
    
    for (int i = 1; i <= k; ++i) {
        int n;
        cin >> n;
        
        if (n >= 2 && hub_id == -1) {
            hub_id = i;
            hub_adj.assign(n + 1, vector<int>());
            for (int j = 0; j < n - 1; ++j) {
                int u, v;
                cin >> u >> v;
                hub_adj[u].push_back(v);
                hub_adj[v].push_back(u);
            }
        } else {
            for (int j = 0; j < n - 1; ++j) {
                int u, v;
                cin >> u >> v;
            }
        }
    }
    
    if (hub_id == -1) {
        for (int i = 2; i <= k; ++i) {
            cout << 1 << " " << 1 << " " << i << " " << 1 << "\n";
        }
        return;
    }
    
    int n_hub = hub_adj.size() - 1;
    vector<int> dp0(n_hub + 1, 0);
    vector<int> dp1(n_hub + 1, 0);
    
    auto dfs = [&](auto& self, int u, int p) -> void {
        dp0[u] = 0;
        dp1[u] = 1;
        for (int v : hub_adj[u]) {
            if (v == p) continue;
            self(self, v, u);
            dp0[u] += max(dp0[v], dp1[v]);
            dp1[u] += dp0[v];
        }
    };
    
    dfs(dfs, 1, 0);
    
    int hub_node = 1;
    
    if (dp1[1] > dp0[1]) {
        hub_node = hub_adj[1][0]; 
    }
    
    for (int i = 1; i <= k; ++i) {
        if (i != hub_id) {
            cout << hub_id << " " << hub_node << " " << i << " " << 1 << "\n";
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