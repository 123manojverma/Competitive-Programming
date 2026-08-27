#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a[i]-=x;
    }
    sort(a.begin(),a.end());
    
    ll cnt=0;
    for(int i=0;i<n;i++){
        int j=i+1,k=n;
        while(j<k){
            int mid=j+(k-j)/2;
            if(a[i]+a[mid]>0){
                k=mid;
            }else{
                j=mid+1;
            }
        }
        if(k==n){
            continue;
        }else{
            cnt+=n-j;
        }
    }
    cout<<cnt<<endl;
}