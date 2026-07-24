#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>a(2*n),b(2*n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i+n]=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            b[i+n]=b[i];
        }
        long long maxi=0,r=0,val=0;
        for(int i=0;i<2*n;i++){
            val+=a[i];
            val-=b[i];
            r++;
            if(val<=0){
                maxi=max(maxi,r);
                val=0;
                r=0;
            }
        }
        cout<<maxi<<endl;
    }
}