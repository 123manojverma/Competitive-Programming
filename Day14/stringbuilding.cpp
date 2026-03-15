#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (i<n-1 && (s[i]==s[i+1]))
            {
                i++;
            }
            else if (i > 0 && (s[i]==s[i-1]))
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}