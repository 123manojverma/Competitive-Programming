#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll>f(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> f[i];
    }

    vector<ll>a(n + 1, 0);

    if (n == 2) {
        a[1] = f[2];
        a[2] = f[1];
        cout << a[1] << " " << a[2] << endl;
        return;
    }

    for (int i = 2; i <= n - 1; ++i) {
        a[i] = (f[i + 1] - 2 * f[i] + f[i - 1]) / 2;
    }

    ll sum_f1 = 0;
    for (int i = 2; i <= n - 1; ++i) {
        sum_f1 += a[i] * (i - 1);
    }
    a[n] = (f[1] - sum_f1) / (n - 1);

    ll sum_fn = 0;
    for (int i = 2; i <= n - 1; ++i) {
        sum_fn += a[i] * (n - i);
    }
    a[1] = (f[n] - sum_fn) / (n - 1);

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
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