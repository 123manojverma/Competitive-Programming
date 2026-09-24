#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        bool even=false,odd=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even=true;
            }else{
                odd=true;
            }
        }
        if(odd && (even || n%2!=0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}