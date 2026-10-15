#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void check(vector<ll> &a, ll x, ll &num)
{
    bool flag = false;
    for (ll y : a)
    {
        if((y|x)!=x){
            break;
        }
        num|=y;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n), b(n), c(n);
        for (auto &y : a)
            cin >> y;
        for (auto &y : b)
            cin >> y;
        for (auto &y : c)
            cin >> y;

        ll num = 0;

        check(a,x,num);
        check(b,x,num);
        check(c,x,num);
        
        if(num==x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}