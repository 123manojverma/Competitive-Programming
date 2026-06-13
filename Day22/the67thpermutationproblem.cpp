#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            int a=i;
            int b=3*n-2*i+1;
            int c=3*n-2*i+2;
            cout<<a<<" "<<b<<" "<<c<<" ";
        }
        cout<<endl;        
    }
}