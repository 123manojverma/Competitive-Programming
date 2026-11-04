#include <bits/stdc++.h>
using namespace std;

static constexpr long long MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> graph(n);
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            --u;
            --v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        string x, y;
        cin >> x >> y;

        vector<int> parent(n, -1);
        vector<int> carry(n, 0);
        vector<int> level{0};

        long long answer = 0;
        long long powerOfTwo = 1;
        bool possible = true;

        while (!level.empty() && possible) {
            int pulseBit = -1;

            for (int u : level) {
                int requiredParity = (x[u] != y[u]);
                int bit = requiredParity ^ carry[u];

                if (pulseBit == -1) {
                    pulseBit = bit;
                } else if (pulseBit != bit) {
                    possible = false;
                    break;
                }
            }

            if (!possible) {
                break;
            }

            if (pulseBit == 1) {
                answer = (answer + powerOfTwo) % MOD;
            }

            vector<int> nextLevel;

            for (int u : level) {
                int offsetBit = (x[u] == '1');

                for (int v : graph[u]) {
                    if (v == parent[u]) {
                        continue;
                    }

                    parent[v] = u;
                    carry[v] = (pulseBit + offsetBit + carry[u]) / 2;
                    nextLevel.push_back(v);
                }
            }

            level.swap(nextLevel);
            powerOfTwo = powerOfTwo * 2 % MOD;
        }

        cout << (possible ? answer : -1) << '\n';
    }

    return 0;
}