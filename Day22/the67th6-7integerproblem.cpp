#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>a(7);
        for(int i=0;i<7;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=a[6];
        for(int i=0;i<6;i++){
            ans-=a[i];
        }
        cout<<ans<<endl;
    }
}