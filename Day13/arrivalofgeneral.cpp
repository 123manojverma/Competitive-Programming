#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxi=-1,mini=101;
    int minidx=-1,maxidx=-1;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>maxi){
            maxi=arr[i];
            maxidx=i;
        }
        if(arr[i]<=mini){
            mini=arr[i];
            minidx=i;
        }
    }
    if(minidx<maxidx){
        cout<<maxidx+n-minidx-2;
    }else{
        cout<<maxidx+n-minidx-1;
    }
}