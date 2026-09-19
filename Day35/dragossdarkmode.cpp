#include <bits/stdc++.h>
using namespace std;

bool isGood(const string& s) {
    int cnt[3] = {1, 0, 0};

    int rem = 0;

    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '1') {
            if (i % 2 == 0)
                rem = (rem + 2) % 3;
            else
                rem = (rem + 1) % 3;
        }

        cnt[rem]++;
    }

    int mn = min({cnt[0], cnt[1], cnt[2]});
    int mx = max({cnt[0], cnt[1], cnt[2]});

    return mx - mn <= 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "1\n";
            continue;
        }

        if (n == 2) {
            cout << "01\n";
            continue;
        }

        string answer;

        for (int first = n / 3; first <= n / 3 + 1; first++) {
            for (int second = 2 * n / 3;
                 second <= 2 * n / 3 + 1;
                 second++) {

                for (int useThird = 0; useThird <= 1; useThird++) {

                    string s(n, '0');

                    s[first - 1] = '1';
                    s[second - 1] = '1';

                    if (useThird)
                        s[n - 1] = '1';

                    if (isGood(s)) {
                        answer = s;
                        break;
                    }
                }

                if (!answer.empty())
                    break;
            }

            if (!answer.empty())
                break;
        }

        cout << answer << '\n';
    }

    return 0;
}