#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,z;
        cin>>n>>k>>z;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>psum(n,0);
        psum[0]=a[0];
        for(int i=1;i<n;i++){
            psum[i]=psum[i-1]+a[i];
        }
        ll ans=psum[k];
        for(int i=1;i<k;i++){
            int moves=k-i;
            int m=0;
            if(moves%2!=0){
                m=(moves/2)+1;
            }else{
                m=moves/2;
            }
            m=min(m,z);
            ll sum=a[i-1]*m;
            if(moves>=m*2){
                sum+=a[i]*m+psum[moves-(m*2)+i];
            }else{
                sum+=a[i]*(m-1)+psum[i];
            }
            ans=max(sum,ans);
        }
        cout<<ans<<endl;
    }
}