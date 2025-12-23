#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int dist=0;
        for(int i=1;i<n;i++){
            dist=max(dist,arr[i]-arr[i-1]);
        }
        dist=max(dist,arr[0]);
        dist=max(dist,(x-arr[n-1])*2);
        cout<<dist<<endl;
    }
}