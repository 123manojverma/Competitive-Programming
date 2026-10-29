#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> a(n + 1);
    vector<int> P(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        P[i] = (P[i - 1] + a[i]) % k;
    }
    
    vector<int> freq(k, 0);
    long long ans = 0;
    
    for (int r = k + 1; r <= n; ++r) {
        freq[P[r - k - 1]]++;
        
        ans += freq[P[r]];
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