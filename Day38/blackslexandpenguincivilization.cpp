#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int total = 1 << n;
    vector<bool>used(total, false);
    vector<int>p;
    p.reserve(total);

    for (int k = n; k >= 0; --k) {
        int mask = (1 << k) - 1;
        
        if (!used[mask]) {
            p.push_back(mask);
            used[mask] = true;
        }

        for (int x = 0; x < total; ++x) {
            if (!used[x] && (x & mask) == mask) {
                p.push_back(x);
                used[x] = true;
            }
        }
    }

    for (int i = 0; i < total; ++i) {
        cout << p[i] << " ";
    }
    cout << "\n";
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