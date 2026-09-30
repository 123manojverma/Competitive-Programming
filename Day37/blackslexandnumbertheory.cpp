#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(auto &x:a)cin>>x;
        sort(a.begin(),a.end());
        cout<<max(a[0],a[1]-a[0])<<endl;
    }
}