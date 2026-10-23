#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;
const int MAXM = 200010;
long long dp[MAXM];

void precompute() {
    for (int i = 0; i <= 9; i++) {
        dp[i] = 1;
    }
    for (int i = 10; i < MAXM; i++) {
        dp[i] = (dp[i - 9] + dp[i - 10]) % MOD;
    }
}

void solve() {
    string n;
    int m;
    cin >> n >> m;
    
    long long total_length = 0;
    for (char c : n) {
        int digit = c - '0';
        total_length = (total_length + dp[m + digit]) % MOD;
    }
    
    cout << total_length << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}