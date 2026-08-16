#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int m;
        ll x;

        cin >> m >> x;

        vector<ll> c(m), h(m);

        ll totalH = 0;

        for (int i = 0; i < m; i++)
        {
            cin >> c[i] >> h[i];
            totalH += h[i];
        }

        const ll INF = 4e18;

        vector<ll> dp(totalH + 1, INF);

        dp[0] = 0;

        for (int i = 0; i < m; i++)
        {
            ll money = 1LL * i * x;

            for (ll happiness = totalH; happiness >= h[i]; happiness--)
            {
                if (dp[happiness - h[i]] == INF)
                    continue;

                ll newCost =
                    dp[happiness - h[i]] + c[i];

                if (newCost <= money)
                {
                    dp[happiness] =
                        min(dp[happiness], newCost);
                }
            }
        }

        ll answer = 0;

        for (ll happiness = 0; happiness <= totalH; happiness++)
        {
            if (dp[happiness] != INF)
            {
                answer = happiness;
            }
        }

        cout << answer << endl;
    }

    return 0;
}