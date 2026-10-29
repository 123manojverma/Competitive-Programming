#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'f')
            ans++;
        if (b[i] == 'f')
            ans++;
    }
    cout << ans % 2 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}