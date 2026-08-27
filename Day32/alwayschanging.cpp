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
        string s;
        cin >> s;
        int cnt = 0, prev = '2', op = 0;
        for (int i = 0; i < n; i++)
        {
            if (prev == '0' && s[i] == '0')
            {
                cnt++;
                op++;
            }
            else if (prev == '1' && s[i] == '1')
            {
                cnt--;
                op++;
            }
            else
            {
                prev = s[i];
            }
        }

        if (abs(cnt) <= 1)
        {
            cout << op << endl;
            continue;
        }
        else if (cnt > 0)
        {
            if (s[0] == '1')
            {
                cnt--;
                op++;
            }
            if (abs(cnt) <= 1)
            {
                cout << op << endl;
                continue;
            }
            if (s[n - 1] == '1')
            {
                cnt--;
                op++;
            }
            if (abs(cnt) <= 1)
            {
                cout << op << endl;
                continue;
            }
        }
        else if(cnt<0)
        {
            if (s[0] == '0')
            {
                cnt++;
                op++;
            }
            if (abs(cnt) <= 1)
            {
                cout << op << endl;
                continue;
            }
            if (s[n - 1] == '0')
            {
                cnt++;
                op++;
            }
            if (abs(cnt) <= 1)
            {
                cout << op << endl;
                continue;
            }
        }
        cout<<-1<<endl;
    }
}