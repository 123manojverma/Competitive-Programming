#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k == 1)
    {
        cout << -1 << '\n';
        return;
    }
    int x = 0;
    int y = n - k + 1;
    for (int i = 1; i < n - k + 1; i++)
    {
        if (a[i] > a[x])
        {
            x = i;
        }
    }
    for (int i = n - k + 2; i < n; i++)
    {
        if (a[i] < a[y])
        {
            y = i;
        }
    }
    if (a[x] > a[y])
    {
        cout << x + 1 << " " << y + 1 << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
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