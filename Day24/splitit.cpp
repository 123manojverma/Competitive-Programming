#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0){
            cout<<"YES"<<endl;
        }else if(n<=2*k){
            cout<<"NO"<<endl;
        }else{
            bool flag=true;
            for(int i=0;i<k;i++){
                if(s[i]!=s[n-i-1]){
                    flag=false;
                    break;
                }
            }
            cout<<(flag?"YES":"NO")<<endl;
        }
    }
}