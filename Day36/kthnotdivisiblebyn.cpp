#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll lt=2*k;
        ll st=1;
        while(st<lt){
            ll mid=st+(lt-st)/2;
            ll val=mid/n;
            if(mid-val>=k){
                lt=mid;
            }else{
                st=mid+1;
            }
        }
        cout<<st<<endl;
    }
}