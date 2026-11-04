#include <bits/stdc++.h>

#define ll long long
#define ld long double
const ll MOD = 998244353;

using namespace std;

void solve()
{
    ll n,m;
    cin>>n>>m;
    ll v=m+2;
    vector<ll>dp(v+1,0),ndp(v+1,0),pre(v+1,0);
    dp[v]=1;
    ll ans=0;
    for (ll len=1;len<=n;len++)
    {
        if (len>=2&&len<=n-1)
        {
            ans+=dp[2];
            ans%=MOD;
        }
        if (len==n)
        {
            ans+=dp[2];
            ans%=MOD;
            break;
        }
        pre[0]=0;
        for (ll x=1;x<=v;x++)
        {
            pre[x]=pre[x-1]+dp[x];
            if (pre[x]>=MOD)pre[x]-=MOD;
        }
        fill(ndp.begin(),ndp.end(),0);
        for (ll y=1;y<=v;y++)
        {
            ll r=min(v,2*y-1);
            ll val=pre[r]-pre[y-1];
            if (val<0)val+=MOD;
            ndp[y]=val;
        }
        dp.swap(ndp);
    }

    cout<<ans%MOD<<'\n';
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;cin>>t;
    while (t--)solve();
    return 0;
}