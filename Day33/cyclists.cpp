#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k, p, m;
        cin >> n >> k >> p >> m;

        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        --p;

        int win = a[p];

        int needFirst = max(0, p - k + 1);

        vector<int> before;

        for (int i = 0; i < p; i++) {
            before.push_back(a[i]);
        }

        sort(before.begin(), before.end());

        long long firstCost = 0;

        for (int i = 0; i < needFirst; i++) {
            firstCost += before[i];
        }

        if (firstCost + win > m) {
            cout << 0 << endl;
            continue;
        }

        vector<int> others;

        for (int i = 0; i < n; i++) {
            if (i != p) {
                others.push_back(a[i]);
            }
        }

        sort(others.begin(), others.end());

        int needCycle = n - k;

        long long cycleCost = 0;

        for (int i = 0; i < needCycle; i++) {
            cycleCost += others[i];
        }

        long long remaining = m - firstCost - win;

        long long ans = 1;

        if (cycleCost + win > 0) {
            ans += remaining / (cycleCost + win);
        }

        cout << ans << endl;
    }

    return 0;
}