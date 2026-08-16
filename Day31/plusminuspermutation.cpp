#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll g=__gcd(x,y);
        ll val=x*y/g;
        ll cnt1=n/x,cnt2=n/y,cnt3=n/val;
        cnt1-=cnt3;
        cnt2-=cnt3;
        ll sum1=((n*(n+1))/2)-(((n-cnt1)*(n-cnt1+1))/2);
        ll sum2=((cnt2)*(cnt2+1))/2;
        cout<<sum1-sum2<<endl;
    }
}