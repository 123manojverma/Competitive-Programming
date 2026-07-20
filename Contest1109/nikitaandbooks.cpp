#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long carry = 0;
        bool flag = true;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            x += carry;

            if (x < i) {
                flag = false;
            } else {
                carry = x - i;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }
}