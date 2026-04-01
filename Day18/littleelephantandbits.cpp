#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans="";
    int n=s.size();
    bool flag=true;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            flag=false;
            ans=s.substr(0,i)+s.substr(i+1,n);
            break;
        }
    }
    if(flag) ans=s.substr(0,n-1);
    cout<<ans;
}