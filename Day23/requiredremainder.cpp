#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int val=n%x;
        if(val==y){
            cout<<n<<endl;
        }else if(val>y){
            cout<<n-(val-y)<<endl;
        }else{
            cout<<n-x+(y-val)<<endl;
        }
    }
}