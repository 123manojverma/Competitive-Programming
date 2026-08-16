#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n >> c;

    vector<int> a(n);
    vector<int> prefC(n + 1, 0);

    int base = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        prefC[i + 1] = prefC[i] + (a[i] == c);

        if (a[i] == c)
            base++;
    }

    vector<vector<int>> pos(500001);

    for (int i = 0; i < n; i++) {
        if (a[i] != c)
            pos[a[i]].push_back(i);
    }

    int ans = base;

    for (int x = 1; x <= 500000; x++) {
        if (pos[x].empty())
            continue;

        int cur = 0;
        int best = 0;

        int prev = -1;

        for (int p : pos[x]) {
            int cntCBetween =
                prefC[p] - prefC[prev + 1];

            cur -= cntCBetween;
            cur += 1;

            cur = max(cur, 1);

            best = max(best, cur);

            prev = p;
        }

        ans = max(ans, base + best);
    }

    cout << ans << endl;
}