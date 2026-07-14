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
        int l=0,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                cnt++;
                l=max(l,cnt);
            }else{
                cnt=0;
            }
        }
        if(l%2==0){
            cout<<l/2<<endl;
        }else{
            cout<<(l/2)+1<<endl;
        }
    }
}