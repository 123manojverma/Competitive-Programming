#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<ll>> op(m, vector<ll>(3));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> op[i][j];
        }
    }

    vector<ll> arr(m, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x - 1]++;
        if (y < m)
        {
            arr[y]--;
        }
    }

    for (int i = 1; i < m; i++)
    {
        arr[i] += arr[i - 1];
    }

    vector<ll> res(n, 0);
    for (int i = 0; i < m; i++)
    {
        ll val = op[i][2] * arr[i];
        res[op[i][0] - 1] += val;
        if (op[i][1] < n)
        {
            res[op[i][1]] -= val;
        }
    }

    for (int i = 1; i < n; i++)
    {
        res[i] += res[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        ll val = a[i] + res[i];
        cout << val << " ";
    }
}