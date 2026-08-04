#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b || b==c || c==a){
            cout<<0<<endl;
        }else{
            int maxi=max({a,b,c});
            int mini=min({a,b,c});
            if(a!=mini && a!=maxi){
                cout<<min(abs(a-b),abs(a-c))<<endl;
            }else if(b!=mini && b!=maxi){
                cout<<min(abs(b-a),abs(b-c))<<endl;
            }else{
                cout<<min(abs(c-a),abs(c-b))<<endl;
            }
        }
    }
}