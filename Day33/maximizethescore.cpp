#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int m = 2 * n;

        vector<int> a(m + 1);
        vector<int> first(n + 1, -1);

        for (int i = 1; i <= m; i++) {
            cin >> a[i];
        }

        vector<ll> dp(m + 1, 0);

        for (int i = 1; i <= m; i++) {

            dp[i] = dp[i - 1] + 1;

            int x = a[i];

            if (first[x] != -1) {
                int l = first[x];

                ll len = i - l + 1;

                dp[i] = max(
                    dp[i],
                    dp[l - 1] + len * len
                );
            } else {
                first[x] = i;
            }
        }

        cout << dp[m] << '\n';
    }

    return 0;
}