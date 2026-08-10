#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P = 998244353;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        long long ans = 1;

        for (int p = 0; p < 2; p++)
        {
            int cnt = 0;

            for (int x = 0; x < 2; x++)
            {
                bool ok = true;

                for (int i = p; i < n; i += 2)
                {
                    int v = x ^ ((i - p) / 2 & 1);
                    if (s[i] != '?' && s[i] - '0' != v)
                    {
                        ok = false;
                        break;
                    }
                }

                cnt += ok;
            }

            ans = 1LL * ans * cnt % P;
        }

        cout << ans << endl;
    }
}