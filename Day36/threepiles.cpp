#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll val=max(abs(a-b),abs(a+c-b));
        cout<<val<<endl;
    }
}