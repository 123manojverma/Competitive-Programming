#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vp vector<pair<ll,ll>>
#define f(i,n) for(ll i=0;i<n;i++)
#define ff(a,b,c) for(ll i=a;i<b;i+=c)
#define fa(v) for (auto &it : v) 
#define all(x) (x).begin(), (x).end()
#define setbits(x) __builtin_popcountll(x)
#define bitlen(x) 64-__builtin_clzll(x)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
const ll N=2e5+10;
const ll M=998244353;
const ll INF=1e18;
const ll LOG=30;


ll func(ll n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 3;
    if(n==3) return 2;
    ll len=bitlen(n);
    return min(len+(((1LL<<len)-1)-n),len+func(n-((1LL<<(len-1))-2)));
}

void solve(){
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    for(ll i=l;i<=r;i++){
        ans=(ans+func(i))%M;
    }
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}