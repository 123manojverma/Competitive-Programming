#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    vector<int>time(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res=0;

    for(int i=0;i<n;i++){
        cin>>time[i];
        if(time[i]==1){
            res+=arr[i];
        }
    }

    int maxi=0;
    for(int i=0;i<k;i++){
        if(time[i]==0){
            maxi+=arr[i];
        }
    }
    int curr=maxi;
    for(int i=k;i<n;i++){
        if(time[i-k]==0){
            curr-=arr[i-k];
        }
        if(time[i]==0){
            curr+=arr[i];
        }
        maxi=max(curr,maxi);
    }

    cout<<maxi+res;

}