#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
vector<int> power(N, 0);

int main()
{
    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // power[2] = 1;
    // for (int i = 3; i < N; i++)
    // {
    //     power[i] = (i / 2) + power[i / 2];
    // }
    // long long ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     long long c1 = power[n - 1];
    //     long long c2 = power[i];
    //     long long c3 = power[n - 1 - i];
    //     if (c1 - c2 - c3 == 0)
    //     {
    //         ans ^= a[i];
    //     }
    // }
    // cout << ans << endl;

    int n;
    cin >> n;
    vector<int> pref(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int num = i;
        while (num % 2 == 0)
        {
            pref[i]++;
            num /= 2;
        }
        pref[i] += pref[i - 1];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (pref[n - 1] - pref[i] - pref[n - i - 1] == 0)
        {
            ans ^= num;
        }
    }

    cout << ans << endl;
}