#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=-1,l=-1,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(f==-1){
                    f=i;
                }
                l=i;
                cnt++;
            }
        }
        if(cnt==2){
            cout<<1<<'\n';
        }else{
            cout<<l-f<<'\n';
        }
    }
}