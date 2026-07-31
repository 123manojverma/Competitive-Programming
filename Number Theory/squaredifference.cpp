#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a-b==1){
            bool flag=true;
            long long val=a+b;
            for(long long i=2;i*i<=val;i++){
                if(val%i==0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}