#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int l=min(n,k);
        int r=min(m,k);
        cout<<l*r<<endl;
    }
}