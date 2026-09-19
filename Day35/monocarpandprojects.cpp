#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll d = y - x;
        ll work = 0;
        ll n = min(k,max(0LL,d - x + 1));
        for (ll i = 0; i < n; i++)
        {
            work += d % (x + i);
        }
        ll remain=k-n;
        work += remain*d;
        cout << work << endl;
    }
}