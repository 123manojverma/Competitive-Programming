#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            int maxi=*max_element(arr.begin(),arr.end());
            for(int j=0;j<n;j++){
                if(arr[j]==0)continue;
                arr[j]^=maxi;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                ans=arr[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
}