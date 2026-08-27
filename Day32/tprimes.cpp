#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n;
    cin>>n;
    vector<ll>a(n);
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }

    maxi=sqrtl(maxi);

    vector<bool>primes(maxi+1,1);

    primes[0]=0;
    if(maxi>=1){
        primes[1]=0;
    }

    for(ll i=2;i<=maxi;i++){
        if(primes[i]){
            for(ll j=i*i;j<=maxi;j+=i){
                primes[j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        ll sq=sqrtl(a[i]);
        if(sq*sq==a[i] && primes[sq]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}