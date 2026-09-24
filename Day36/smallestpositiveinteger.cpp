#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,k;
    cin>>n>>k;
    ll s=k,e=2*k;
    while(s<e){
        ll mid=s+(e-s)/2;
        if(mid-mid/n>=k){
            e=mid;
        }else{
            s=mid+1;
        }
    }
    cout<<s<<endl;
}