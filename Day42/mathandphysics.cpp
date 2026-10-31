#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(auto &x:a)cin>>x;

        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]>1)cnt++;
        }
        if(cnt==0){
            cout<<-1<<'\n';
        }
        else if(cnt==1){
            if(a[0]>1)cout<<a[0];
            else if(a[n-1]>1)cout<<a[n-1];
            else{
                long long sum=-1;
                for(int i=0;i<n;i++){
                    sum+=a[i];
                }
                cout<<sum;
            }
            cout<<'\n';
        }else if(cnt==2 && a[0]>1 && a[n-1]>1){
            cout<<(a[0]+a[n-1]-1)<<'\n';
        }else{
            long long sum=-1;
            for(int i=0;i<n;i++){
                sum+=a[i];
            }
            cout<<sum<<'\n';
        }
    }
}