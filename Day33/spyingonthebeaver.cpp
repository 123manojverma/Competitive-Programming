#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<int> cnt;
vector<bool> dam;
vector<int> answer;

void dfs(int u) {

    for (int v : tree[u]) {
        dfs(v);
        cnt[u] += cnt[v];
    }

    if (cnt[u] == 0) {
        if (dam[u]) {
            cnt[u] = 1;
        }
        return;
    }

    if (dam[u]) {

        for (int v : tree[u]) {
            if (cnt[v] > 0) {
                answer.push_back(v);
            }
        }

        cnt[u] = 1;
    }

    else {

        if (cnt[u] > 1) {

            bool keptOne = false;

            for (int v : tree[u]) {

                if (cnt[v] > 0) {
                    if (!keptOne) {
                        keptOne = true;
                    } else {
                        answer.push_back(v);
                    }
                }
            }

            cnt[u] = 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        tree.assign(n + 1, {});
        cnt.assign(n + 1, 0);
        dam.assign(n + 1, false);
        answer.clear();

        for (int v = 2; v <= n; v++) {
            int p;
            cin >> p;

            tree[p].push_back(v);
        }

        int m;
        cin >> m;

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            dam[x] = true;
        }

        dfs(1);

        cout << answer.size();

        for (int v : answer) {
            cout << ' ' << v;
        }

        cout << '\n';
    }

    return 0;
}