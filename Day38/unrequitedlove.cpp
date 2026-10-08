#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int m = n - 4;
    if (m < 2) {
        cout << 0 << "\n";
        return;
    }

    vector<long long> v(m + 1);
    map<long long, long long> freq;

    for (int i = 1; i <= m; ++i) {
        v[i] = a[i] + a[i + 2] - a[i + 4];
        freq[v[i]]++;
    }

    long long ans = 0;
    for (auto const& it : freq) {
        ans += it.second * (it.second - 1) / 2;
    }

    for (int i = 1; i <= m; ++i) {
        if (i + 2 <= m && v[i] == v[i + 2]) {
            ans--;
        }
        if (i + 4 <= m && v[i] == v[i + 4]) {
            ans--;
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