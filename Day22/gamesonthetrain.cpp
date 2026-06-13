#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr(n);
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
        cout<<maxi-mini+1<<endl;
    }
}