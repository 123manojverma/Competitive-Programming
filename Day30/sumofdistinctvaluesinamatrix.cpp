#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TestsNumT;
    cin >> TestsNumT;

    while (TestsNumT--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        int limit = n + m;

        vector<int> inA(limit + 1, 0);
        vector<int> inB(limit + 1, 0);

        for (int i = 0; i < x; i++) {
            int v;
            cin >> v;
            inA[v] = 1;
        }

        for (int i = 0; i < y; i++) {
            int v;
            cin >> v;
            inB[v] = 1;
        }

        int onlyA = 0;
        int onlyB = 0;
        int total = 0;
        long long ans = 0;

        for (int v = limit; v >= 1; v--) {
            if (!inA[v] && !inB[v])
                continue;

            if (total == n + m - 1)
                break;

            if (inA[v] && inB[v]) {
                ans += v;
                total++;
            }
            else if (inA[v]) {
                if (onlyA < n) {
                    ans += v;
                    total++;
                    onlyA++;
                }
            }
            else {
                if (onlyB < m) {
                    ans += v;
                    total++;
                    onlyB++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}