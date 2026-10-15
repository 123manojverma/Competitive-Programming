#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x:a){
            cin>>x;
        }
        int mx=a[0];
        int parity=abs(a[0])%2,sum=a[0]<0?0:a[0];
        for(int i=1;i<n;i++){
            if(abs(a[i])%2==parity){
                sum=0;
            }
            parity=abs(a[i])%2;
            sum+=a[i];
            mx=max(mx,sum);
            if(sum<0){
                sum=0;
            }
        }
        cout<<mx<<endl;
    }
}