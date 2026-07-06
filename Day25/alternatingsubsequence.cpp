#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=true;
        if(a[0]<0){
            flag=false;
        }
        long long sum=0;
        int val=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<0 && flag){
                sum+=val;
                flag=false;
                val=a[i];
            }else if(a[i]>0 && !flag){
                sum+=val;
                flag=true;
                val=a[i];
            }else{
                val=max(val,a[i]);
            }
        }
        sum+=val;
        cout<<sum<<endl;
    }
}