#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (abs(a - b) <= 1)
        {
            if (a <= b)
            {
                cout << b << '\n';
            }
            else
            {
                cout << a + 1 << '\n';
            }
        }
        else if (a > b)
        {
            if ((a - b) % 2 == 0)
            {
                cout << a << '\n';
            }
            else
            {
                cout << a + 1 << '\n';
            }
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}