#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 998244353;
const int MAXN = 200000;

ll power(ll a, ll b) {
    ll res = 1;

    while (b) {
        if (b & 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> fact(MAXN + 1), inv(MAXN + 1);

    fact[0] = 1;

    for (int i = 1; i <= MAXN; i++)
        fact[i] = fact[i - 1] * i % MOD;

    for (int i = 1; i <= MAXN; i++)
        inv[i] = power(i, MOD - 2);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<ll> a(n);

        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        ll totalTrees = fact[n - 1];

        ll suffixSum = 0;
        ll ans = 0;

        for (int i = n - 2; i >= 0; i--) {

            suffixSum = (suffixSum + a[i + 1]) % MOD;

            ll choices = n - 1 - i;

            ll edgeSum =
                (suffixSum - (a[i] % MOD) * choices) % MOD;

            if (edgeSum < 0)
                edgeSum += MOD;

            ll numberOfDynasties =
                totalTrees * inv[choices] % MOD;

            ans = (ans + edgeSum * numberOfDynasties) % MOD;
        }

        cout << ans << '\n';
    }
}