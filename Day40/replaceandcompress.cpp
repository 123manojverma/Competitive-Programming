#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    bool triple = false;
    bool isolated = false;

    for (int i = 1; i <= n - 2; i++) {
        if (s[i - 1] == s[i] && s[i] == s[i + 1]) {
            triple = true;
        } else if (s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
            isolated = true;
        }
    }

    cout << 1 + triple + isolated << "\n";
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