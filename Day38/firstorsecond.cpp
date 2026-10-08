#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long>a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<long long>suf(n + 2, 0);
    for (int i = n; i >= 1; --i) {
        suf[i] = suf[i + 1] + a[i];
    }

    long long ans = -4e18;
    long long prefix_contrib = a[1];

    for (int k = 1; k <= n; ++k) {
        if (k == 1) {
            long long current = -suf[2];
            ans = max(ans, current);
        } else {
            long long current = prefix_contrib - suf[k + 1];
            ans = max(ans, current);

            prefix_contrib += abs(a[k]);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}