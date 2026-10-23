#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1, 0);
        int mx = -1, mi = 1e9;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            ans |= a[i];
            mx = max(mx, a[i]);
            mi = min(mi, a[i]);
        }
        int res = 0;

        for (int i = 31; i >= 0; i--)
        {
            if ((mx >> i) & 1)
            {
                int x = 0;
                for (int j = 31; j >= 0; j--)
                {
                    if (j > i && ((mx >> j) & 1))
                        x |= (1 << j);
                    else if (j >= i)
                        continue;
                    else
                    {
                        x |= (1 << j);
                    }
                }
                if (x >= mi)
                {
                    res = x;
                    break;
                }
            }
        }
        cout << (ans | res) << endl;
    }
}
