#include <bits/stdc++.h>
using namespace std;

struct Element {
    int l, r;
    int u, v;
};

bool possible(int m, const vector<Element>& a) {
    int n = a.size();

    int j = 1;

    for (int i = 0; i < n; i++) {

        if (j > m)
            return true;

        bool leftOK = !(a[i].l <= j && j <= a[i].r);

        int rightRank = m - j + 1;

        bool rightOK = !(a[i].u <= rightRank && rightRank <= a[i].v);

        if (leftOK && rightOK) {
            j++;
        }
    }

    return j > m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<Element> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i].l
                >> a[i].r
                >> a[i].u
                >> a[i].v;
        }

        int answer = 0;

        for (int m = n; m >= 1; m--) {
            if (possible(m, a)) {
                answer = m;
                break;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}