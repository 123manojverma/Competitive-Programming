#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        if (m.count(0) && m[0] == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        map<ll, char> mp;
        if (m.count(0))
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i]==0)
                {
                    cout << (flag?'A':'B');
                    flag=!flag;
                }
                else
                {
                    cout<<'C';
                }
            }
        }
        else
        {
            bool flag = true, flag1 = true;
            for (int i = 0; i < n; i++)
            {
                if (flag && !mp.count(a[i]))
                {
                    cout << 'A';
                    mp[a[i]] = 'A';
                    flag = false;
                }
                else
                {
                    if (mp.count(a[i]))
                    {
                        cout << mp[a[i]];
                    }
                    else
                    {
                        if (flag1)
                        {
                            mp[a[i]] = 'B';
                        }
                        else
                        {
                            mp[a[i]] = 'C';
                        }
                        flag1 = !flag1;
                        cout << mp[a[i]];
                    }
                }
            }
        }
        cout << endl;
    }
}