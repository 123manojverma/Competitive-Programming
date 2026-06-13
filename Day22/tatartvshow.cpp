#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n-k;i++){
            if(s[i]=='1'){
                s[i]='0';
                s[i+k]=s[i+k]=='1'?'0':'1';
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}