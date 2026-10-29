#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    auto check = [&](long long k) {
        vector<long long> bad;
        
        for (int i = 0; i < n; i++) {
            long long dist = 2e18; 
            if (i > 0) dist = min(dist, a[i] - a[i-1]);
            if (i < n - 1) dist = min(dist, a[i+1] - a[i]);
            
            if (dist > k) {
                bad.push_back(a[i]);
            }
        }
        
        long long extra = 0;
        int m = bad.size();
        for (int i = 0; i < m; ) {
            if (i + 1 < m && bad[i+1] - bad[i] <= 2 * k) {
                extra++;
                i += 2; 
            } else {
                extra++;
                i++;
            }
        }
        
        return extra <= x;
    };

    long long low = 1, high = 1e9, ans = 1e9;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1; 
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