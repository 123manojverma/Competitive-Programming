#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        long long a=1,b=2;
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<n;i++){
            long long c=a+b;
            cout<<c<<" ";
            a=c;
            b=c;
        }
        cout<<endl;
    }
}