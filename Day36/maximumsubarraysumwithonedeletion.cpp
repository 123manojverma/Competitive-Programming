#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n),pre(n,0),suf(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxsum=max(maxsum,sum);
        pre[i]=sum;
        if(sum<0)sum=0;
    }
    sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
        suf[i]=sum;
        if(sum<0)sum=0;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<0){
            int left=i==0?0:pre[i-1];
            int right=suf[i+1];
            maxsum=max(maxsum,left+right);
        }
    }
    cout<<maxsum<<endl;
}