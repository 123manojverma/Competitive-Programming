#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> c(n), p(n);

        for (int i = 0; i < n; i++) {
            cin >> c[i] >> p[i];
        }

        double dp = 0.0;

        for (int i = n - 1; i >= 0; i--) {
            double remainingStamina = 1.0 - p[i] / 100.0;

            dp = max(dp, c[i] + remainingStamina * dp);
        }

        cout << fixed << setprecision(10) << dp << '\n';
    }

    return 0;
}