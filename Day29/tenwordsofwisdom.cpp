#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>arr;
        while(n--){
            vector<int>a(2,0);
            cin>>a[0];
            cin>>a[1];
            arr.push_back(a);
        }
        int maxi=0;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i][0]<=10){
                if(arr[i][1]>maxi){
                    maxi=arr[i][1];
                    ans=i+1;
                }
            }
        }
        cout<<ans<<endl;
    }
}