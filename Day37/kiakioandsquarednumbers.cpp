#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll f(ll x) {
    ll sum = 0;

    while (x > 0) {
        ll d = x % 10;
        sum += d * d;
        x /= 10;
    }

    return sum;
}

ll normalize(ll x) {
    for (int i = 0; i < 100; i++) {
        x = f(x);
    }

    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        map<ll, ll> cnt;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            x = normalize(x);

            cnt[x]++;
        }

        ll ans = 0;

        for (auto &x : cnt) {
            ans += x.second * (x.second - 1) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}