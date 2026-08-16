#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<vector<int>> adj(n);

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            --u;
            --v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> parent(n, -1);
        vector<int> order;
        order.reserve(n);

        parent[0] = 0;
        order.push_back(0);

        for (int i = 0; i < (int)order.size(); i++) {
            int u = order[i];

            for (int v : adj[u]) {
                if (v == parent[u]) continue;

                parent[v] = u;
                order.push_back(v);
            }
        }

        vector<int> sub(n, 1);

        for (int i = n - 1; i > 0; i--) {
            int u = order[i];
            sub[parent[u]] += sub[u];
        }

        ll ans = 0;

        for (int x = 0; x < n; x++) {

            int r = sqrt(a[x]);

            if (r * r != a[x])
                continue;

            ll sum1 = 0;
            ll sum2 = 0;  
            ll sum3 = 0;  

            for (int v : adj[x]) {

                ll sz;

                if (parent[v] == x) {
                    sz = sub[v];
                } else {
                    sz = n - sub[x];
                }

                sum3 += sum2 * sz;
                sum2 += sum1 * sz;
                sum1 += sz;
            }

            ans += sum2 + sum3;
        }

        cout << ans << endl;
    }

    return 0;
}