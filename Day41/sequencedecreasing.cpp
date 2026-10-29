#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int min_val = 2e9;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        min_val = min(min_val, x);
    }
    
    if (min_val < n) {
        cout << n << "\n";
    } else {
        cout << 0 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}