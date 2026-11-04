#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<ll>a(n);
        for(auto &x:a)cin>>x;
        
        for(int i=0;i<n;i+=2){
            a[i] = -a[i];
        }

        sort(a.begin(),a.end());
 
        ll ans = 0;
 
        for(int i = 0; i < (n+1)/2; i++) ans -= a[i];
        for(int i = (n+1)/2; i < n; i++) ans += a[i];
 
        cout << ans << '\n';
    }
}